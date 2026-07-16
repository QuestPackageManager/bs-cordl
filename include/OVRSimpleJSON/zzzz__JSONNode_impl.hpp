#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONNode.hpp"
#include "OVRSimpleJSON/zzzz__JSONContainerType_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONArray_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONContainerType_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONObject_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RectOffset_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::Enumerator_JSONNode_Type::Enumerator_JSONNode_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::Enumerator_JSONNode_Type::Enumerator_JSONNode_Type() {}
constexpr ::OVRSimpleJSON::Enumerator_JSONNode_Type OVRSimpleJSON::Enumerator_JSONNode_Type::None{ static_cast<int32_t>(0x0) };
constexpr ::OVRSimpleJSON::Enumerator_JSONNode_Type OVRSimpleJSON::Enumerator_JSONNode_Type::Array{ static_cast<int32_t>(0x1) };
constexpr ::OVRSimpleJSON::Enumerator_JSONNode_Type OVRSimpleJSON::Enumerator_JSONNode_Type::Object{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_Enumerator.get_IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode_Enumerator::*)()>(&::OVRSimpleJSON::JSONNode_Enumerator::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2441c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_Enumerator>(), { "get_IsValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode_Enumerator::*)(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>)>(
    &::OVRSimpleJSON::JSONNode_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e2442c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_Enumerator>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_Enumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode_Enumerator::*)(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>)>(
    &::OVRSimpleJSON::JSONNode_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e24458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_Enumerator>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_Enumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> (::OVRSimpleJSON::JSONNode_Enumerator::*)()>(
    &::OVRSimpleJSON::JSONNode_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e2447c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_Enumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_Enumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode_Enumerator::*)()>(&::OVRSimpleJSON::JSONNode_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e24520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_Enumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
inline bool OVRSimpleJSON::JSONNode_Enumerator::get_IsValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_Enumerator>(), { "get_IsValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode_Enumerator::_ctor(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*> aArrayEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_Enumerator>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aArrayEnum);
}
inline void OVRSimpleJSON::JSONNode_Enumerator::_ctor(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> aDictEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_Enumerator>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aDictEnum);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> OVRSimpleJSON::JSONNode_Enumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_Enumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>(*this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode_Enumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_Enumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "type", ty: "::OVRSimpleJSON::Enumerator_JSONNode_Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Object", ty:
// "::System::Collections::Generic::Dictionary_2_Enumerator<::StringW,::OVRSimpleJSON::JSONNode*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Array", ty:
// "::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::JSONNode_Enumerator::JSONNode_Enumerator(::OVRSimpleJSON::Enumerator_JSONNode_Type type,
                                                                    ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> m_Object,
                                                                    ::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*> m_Array) noexcept {
  this->type = type;
  this->m_Object = m_Object;
  this->m_Array = m_Array;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode_Enumerator::JSONNode_Enumerator() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_ValueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode_ValueEnumerator::*)(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>)>(
    &::OVRSimpleJSON::JSONNode_ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e245bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_ValueEnumerator>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_ValueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode_ValueEnumerator::*)(
    ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::JSONNode_ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e245f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_ValueEnumerator>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_ValueEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode_ValueEnumerator::*)(::OVRSimpleJSON::JSONNode_Enumerator)>(&::OVRSimpleJSON::JSONNode_ValueEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e24650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_ValueEnumerator>(), { ".ctor", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode_Enumerator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_ValueEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode_ValueEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_ValueEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e24658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_ValueEnumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_ValueEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode_ValueEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_ValueEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e246a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_ValueEnumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_ValueEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode_ValueEnumerator (::OVRSimpleJSON::JSONNode_ValueEnumerator::*)()>(
    &::OVRSimpleJSON::JSONNode_ValueEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e246a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_ValueEnumerator>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline void OVRSimpleJSON::JSONNode_ValueEnumerator::_ctor(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*> aArrayEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_ValueEnumerator>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aArrayEnum);
}
inline void OVRSimpleJSON::JSONNode_ValueEnumerator::_ctor(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> aDictEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_ValueEnumerator>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aDictEnum);
}
inline void OVRSimpleJSON::JSONNode_ValueEnumerator::_ctor(::OVRSimpleJSON::JSONNode_Enumerator aEnumerator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_ValueEnumerator>(), { ".ctor", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode_Enumerator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aEnumerator);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode_ValueEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_ValueEnumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(*this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode_ValueEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_ValueEnumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_ValueEnumerator OVRSimpleJSON::JSONNode_ValueEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_ValueEnumerator>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_ValueEnumerator>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::OVRSimpleJSON::JSONNode_Enumerator", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::JSONNode_ValueEnumerator::JSONNode_ValueEnumerator(::OVRSimpleJSON::JSONNode_Enumerator m_Enumerator) noexcept {
  this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode_ValueEnumerator::JSONNode_ValueEnumerator() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_KeyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode_KeyEnumerator::*)(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>)>(
    &::OVRSimpleJSON::JSONNode_KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e246b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_KeyEnumerator>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_KeyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode_KeyEnumerator::*)(
    ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::JSONNode_KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e246ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_KeyEnumerator>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_KeyEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode_KeyEnumerator::*)(::OVRSimpleJSON::JSONNode_Enumerator)>(&::OVRSimpleJSON::JSONNode_KeyEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2474c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_KeyEnumerator>(), { ".ctor", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode_Enumerator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_KeyEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVRSimpleJSON::JSONNode_KeyEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_KeyEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e24754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_KeyEnumerator>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_KeyEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode_KeyEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_KeyEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e24798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_KeyEnumerator>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_KeyEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode_KeyEnumerator (::OVRSimpleJSON::JSONNode_KeyEnumerator::*)()>(
    &::OVRSimpleJSON::JSONNode_KeyEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e2479c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_KeyEnumerator>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
inline void OVRSimpleJSON::JSONNode_KeyEnumerator::_ctor(::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*> aArrayEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_KeyEnumerator>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1_Enumerator<::OVRSimpleJSON::JSONNode*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aArrayEnum);
}
inline void OVRSimpleJSON::JSONNode_KeyEnumerator::_ctor(::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> aDictEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_KeyEnumerator>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aDictEnum);
}
inline void OVRSimpleJSON::JSONNode_KeyEnumerator::_ctor(::OVRSimpleJSON::JSONNode_Enumerator aEnumerator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_KeyEnumerator>(), { ".ctor", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode_Enumerator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, aEnumerator);
}
inline ::StringW OVRSimpleJSON::JSONNode_KeyEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_KeyEnumerator>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode_KeyEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_KeyEnumerator>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_KeyEnumerator OVRSimpleJSON::JSONNode_KeyEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_KeyEnumerator>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_KeyEnumerator>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::OVRSimpleJSON::JSONNode_Enumerator", modifiers: "", def_value: Some("{}") }]
constexpr ::OVRSimpleJSON::JSONNode_KeyEnumerator::JSONNode_KeyEnumerator(::OVRSimpleJSON::JSONNode_Enumerator m_Enumerator) noexcept {
  this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode_KeyEnumerator::JSONNode_KeyEnumerator() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode_LinqEnumerator::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e247ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(
    &::OVRSimpleJSON::JSONNode_LinqEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2485c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(
    &::OVRSimpleJSON::JSONNode_LinqEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5e24864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_LinqEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e248cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_LinqEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e248d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>* (
    ::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_LinqEnumerator::GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e248e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(&::OVRSimpleJSON::JSONNode_LinqEnumerator::Reset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e24948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode_LinqEnumerator.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::OVRSimpleJSON::JSONNode_LinqEnumerator::*)()>(
    &::OVRSimpleJSON::JSONNode_LinqEnumerator::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e249ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::JSONNode_LinqEnumerator::__cordl_internal_get_m_Node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Node;
}
constexpr ::OVRSimpleJSON::JSONNode* const& OVRSimpleJSON::JSONNode_LinqEnumerator::__cordl_internal_get_m_Node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Node;
}
constexpr void OVRSimpleJSON::JSONNode_LinqEnumerator::__cordl_internal_set_m_Node(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Node = value;
}
constexpr ::OVRSimpleJSON::JSONNode_Enumerator& OVRSimpleJSON::JSONNode_LinqEnumerator::__cordl_internal_get_m_Enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enumerator;
}
constexpr ::OVRSimpleJSON::JSONNode_Enumerator const& OVRSimpleJSON::JSONNode_LinqEnumerator::__cordl_internal_get_m_Enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enumerator;
}
constexpr void OVRSimpleJSON::JSONNode_LinqEnumerator::__cordl_internal_set_m_Enumerator(::OVRSimpleJSON::JSONNode_Enumerator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Enumerator = value;
}
inline void OVRSimpleJSON::JSONNode_LinqEnumerator::_ctor(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aNode);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> OVRSimpleJSON::JSONNode_LinqEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>(this, ___internal_method);
}
inline ::System::Object* OVRSimpleJSON::JSONNode_LinqEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode_LinqEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode_LinqEnumerator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>* OVRSimpleJSON::JSONNode_LinqEnumerator::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*>(this,
                                                                                                                                                                                    ___internal_method);
}
inline void OVRSimpleJSON::JSONNode_LinqEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* OVRSimpleJSON::JSONNode_LinqEnumerator::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_LinqEnumerator* OVRSimpleJSON::JSONNode_LinqEnumerator::New_ctor(::OVRSimpleJSON::JSONNode* aNode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVRSimpleJSON::JSONNode_LinqEnumerator*>(aNode));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr OVRSimpleJSON::JSONNode_LinqEnumerator::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*
OVRSimpleJSON::JSONNode_LinqEnumerator::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___OVRSimpleJSON__JSONNode___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr OVRSimpleJSON::JSONNode_LinqEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* OVRSimpleJSON::JSONNode_LinqEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OVRSimpleJSON::JSONNode_LinqEnumerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OVRSimpleJSON::JSONNode_LinqEnumerator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr OVRSimpleJSON::JSONNode_LinqEnumerator::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::OVRSimpleJSON::JSONNode*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*
OVRSimpleJSON::JSONNode_LinqEnumerator::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___OVRSimpleJSON__JSONNode___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr OVRSimpleJSON::JSONNode_LinqEnumerator::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* OVRSimpleJSON::JSONNode_LinqEnumerator::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode_LinqEnumerator::JSONNode_LinqEnumerator() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__43._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode__get_Children_d__43::*)(int32_t)>(&::OVRSimpleJSON::JSONNode__get_Children_d__43::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e24a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__43.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode__get_Children_d__43::*)()>(&::OVRSimpleJSON::JSONNode__get_Children_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e24a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode__get_Children_d__43::*)()>(&::OVRSimpleJSON::JSONNode__get_Children_d__43::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e24a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__43.System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode__get_Children_d__43::*)()>(
    &::OVRSimpleJSON::JSONNode__get_Children_d__43::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e24a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__43.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode__get_Children_d__43::*)()>(
    &::OVRSimpleJSON::JSONNode__get_Children_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e24a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__43.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::OVRSimpleJSON::JSONNode__get_Children_d__43::*)()>(
    &::OVRSimpleJSON::JSONNode__get_Children_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e24ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__43.System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* (::OVRSimpleJSON::JSONNode__get_Children_d__43::*)()>(
    &::OVRSimpleJSON::JSONNode__get_Children_d__43::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e24ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_Children_d__43.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::OVRSimpleJSON::JSONNode__get_Children_d__43::*)()>(
    &::OVRSimpleJSON::JSONNode__get_Children_d__43::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e24b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& OVRSimpleJSON::JSONNode__get_Children_d__43::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& OVRSimpleJSON::JSONNode__get_Children_d__43::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void OVRSimpleJSON::JSONNode__get_Children_d__43::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::JSONNode__get_Children_d__43::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::OVRSimpleJSON::JSONNode* const& OVRSimpleJSON::JSONNode__get_Children_d__43::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void OVRSimpleJSON::JSONNode__get_Children_d__43::__cordl_internal_set___2__current(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& OVRSimpleJSON::JSONNode__get_Children_d__43::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& OVRSimpleJSON::JSONNode__get_Children_d__43::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void OVRSimpleJSON::JSONNode__get_Children_d__43::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
inline void OVRSimpleJSON::JSONNode__get_Children_d__43::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void OVRSimpleJSON::JSONNode__get_Children_d__43::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode__get_Children_d__43::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode__get_Children_d__43::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode__get_Children_d__43::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* OVRSimpleJSON::JSONNode__get_Children_d__43::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONNode__get_Children_d__43::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* OVRSimpleJSON::JSONNode__get_Children_d__43::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode__get_Children_d__43* OVRSimpleJSON::JSONNode__get_Children_d__43::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVRSimpleJSON::JSONNode__get_Children_d__43*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::JSONNode__get_Children_d__43::operator ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONNode__get_Children_d__43::i___System__Collections__Generic__IEnumerable_1___OVRSimpleJSON__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr OVRSimpleJSON::JSONNode__get_Children_d__43::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* OVRSimpleJSON::JSONNode__get_Children_d__43::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::JSONNode__get_Children_d__43::operator ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONNode__get_Children_d__43::i___System__Collections__Generic__IEnumerator_1___OVRSimpleJSON__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr OVRSimpleJSON::JSONNode__get_Children_d__43::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* OVRSimpleJSON::JSONNode__get_Children_d__43::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OVRSimpleJSON::JSONNode__get_Children_d__43::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OVRSimpleJSON::JSONNode__get_Children_d__43::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode__get_Children_d__43::JSONNode__get_Children_d__43() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::*)(int32_t)>(&::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e24b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::*)()>(&::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e24b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::*)()>(&::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::MoveNext)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x5e24c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::*)()>(&::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__m__Finally1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e2511c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45.__m__Finally2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::*)()>(&::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__m__Finally2)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e25068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "<>m__Finally2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45.System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e251d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e251d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e25210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45.System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e25218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::*)()>(
    &::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e252b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::OVRSimpleJSON::JSONNode* const& OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_set___2__current(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::OVRSimpleJSON::JSONNode* const& OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_set___4__this(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*& OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* const& OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*& OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* const& OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap2 = value;
}
inline void OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::__m__Finally2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "<>m__Finally2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45* OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::operator ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::i___System__Collections__Generic__IEnumerable_1___OVRSimpleJSON__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::operator ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::i___System__Collections__Generic__IEnumerator_1___OVRSimpleJSON__JSONNode__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode__get_DeepChildren_d__45::JSONNode__get_DeepChildren_d__45() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Tag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNodeType (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Tag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(int32_t)>(&::OVRSimpleJSON::JSONNode::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f17ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(int32_t, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f17efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::StringW)>(&::OVRSimpleJSON::JSONNode::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f17f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::set_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f17f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Value)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f17f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::StringW)>(&::OVRSimpleJSON::JSONNode::set_Value)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f17f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f17f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f17f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f17f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsBoolean)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f17f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f17f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f17f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_IsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_IsObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f17f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Inline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Inline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f17f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_Inline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(bool)>(&::OVRSimpleJSON::JSONNode::set_Inline)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f17f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::Add)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f17f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::Add)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f17f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::StringW)>(&::OVRSimpleJSON::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f18004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(int32_t)>(&::OVRSimpleJSON::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f1800c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::Remove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f18014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f1801c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::Clone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f18020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Children
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* (::OVRSimpleJSON::JSONNode::*)()>(
    &::OVRSimpleJSON::JSONNode::get_Children)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f18028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_DeepChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* (::OVRSimpleJSON::JSONNode::*)()>(
    &::OVRSimpleJSON::JSONNode::get_DeepChildren)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f18090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "get_DeepChildren", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.HasKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)(::StringW)>(&::OVRSimpleJSON::JSONNode::HasKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f18100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.GetValueOrDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONNode::GetValueOrDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f18108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ToString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f18110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OVRSimpleJSON::JSONNode::*)(int32_t)>(&::OVRSimpleJSON::JSONNode::ToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f181a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteToStringBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(::System::Text::StringBuilder*, int32_t, int32_t, ::OVRSimpleJSON::JSONTextMode)>(
    &::OVRSimpleJSON::JSONNode::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode_Enumerator (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::GetEnumerator)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Linq
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>* (
    ::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Linq)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f1823c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "get_Linq", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode_KeyEnumerator (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Keys)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f1829c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "get_Keys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode_ValueEnumerator (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_Values)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f182d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "get_Values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsDouble)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f18314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(double_t)>(&::OVRSimpleJSON::JSONNode::set_AsDouble)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f183bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsInt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f18444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(int32_t)>(&::OVRSimpleJSON::JSONNode::set_AsInt)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f18478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsFloat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f1848c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(float_t)>(&::OVRSimpleJSON::JSONNode::set_AsFloat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f184ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsBool)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f184c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsBool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(bool)>(&::OVRSimpleJSON::JSONNode::set_AsBool)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f18550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsLong)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f185e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(int64_t)>(&::OVRSimpleJSON::JSONNode::set_AsLong)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f18684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsULong)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f1870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.set_AsULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)(uint64_t)>(&::OVRSimpleJSON::JSONNode::set_AsULong)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f187b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONArray* (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsArray)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f18838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_AsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONObject* (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::get_AsObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f188b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::StringW)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f18930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___StringW
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f189cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(double_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f18a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_double_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_double_t)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f18abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(float_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f18b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_float_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f18bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(int32_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f18c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_int32_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_int32_t)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f18c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(int64_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f18d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_int64_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_int64_t)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f18e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(uint64_t)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f18ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_uint64_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_uint64_t)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f18ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(bool)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f19080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit_bool
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f190e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>)>(
    &::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f1916c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(),
                                                             { "op_Implicit", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::OVRSimpleJSON::JSONNode*, ::System::Object*)>(&::OVRSimpleJSON::JSONNode::op_Equality)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5f13a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Equality", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::OVRSimpleJSON::JSONNode*, ::System::Object*)>(&::OVRSimpleJSON::JSONNode::op_Inequality)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f13b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Inequality", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OVRSimpleJSON::JSONNode::*)(::System::Object*)>(&::OVRSimpleJSON::JSONNode::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f191b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f191bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.get_EscapeBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)()>(&::OVRSimpleJSON::JSONNode::get_EscapeBuilder)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5f191d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "get_EscapeBuilder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Escape
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::OVRSimpleJSON::JSONNode::Escape)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5f1930c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "Escape", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ParseElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::StringW, bool)>(&::OVRSimpleJSON::JSONNode::ParseElement)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5f19658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ParseElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::StringW)>(&::OVRSimpleJSON::JSONNode::Parse)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x5f13180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.GetContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::OVRSimpleJSON::JSONContainerType)>(&::OVRSimpleJSON::JSONNode::GetContainer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f19894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "GetContainer", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONContainerType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Vector2)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f19924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Vector3)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f19b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Vector4)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f19d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Color)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f1a088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Quaternion)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f1a380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::Rect)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f1a678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___OVRSimpleJSON__JSONNode_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (*)(::UnityEngine::RectOffset*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f1a970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::RectOffset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Vector2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1acbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Vector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1ad20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Vector4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1ad88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Color)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f1adf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Quaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Quaternion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1ae24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__Rect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Rect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f1ae8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.op_Implicit___UnityEngine__RectOffset_
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RectOffset* (*)(::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__RectOffset_)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f1aec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector2)>(&::OVRSimpleJSON::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5f1af54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector2", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::OVRSimpleJSON::JSONNode::*)(::StringW, ::StringW)>(&::OVRSimpleJSON::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f1b09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector2", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadVector2)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f1accc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteVector2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector2, ::StringW, ::StringW)>(
    &::OVRSimpleJSON::JSONNode::WriteVector2)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f199dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(),
                                                             { "WriteVector2", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector3)>(&::OVRSimpleJSON::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5f1b178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector3", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::OVRSimpleJSON::JSONNode::*)(::StringW, ::StringW, ::StringW)>(&::OVRSimpleJSON::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5f1b340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector3", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadVector3)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f1ad30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteVector3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector3, ::StringW, ::StringW, ::StringW)>(
    &::OVRSimpleJSON::JSONNode::WriteVector3)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5f19bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(),
                                         { "WriteVector3", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector4)>(&::OVRSimpleJSON::JSONNode::ReadVector4)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5f1b45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector4", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadVector4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadVector4)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f1ad98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteVector4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Vector4)>(&::OVRSimpleJSON::JSONNode::WriteVector4)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5f19e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "WriteVector4", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Color)>(&::OVRSimpleJSON::JSONNode::ReadColor)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5f1b69c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f1ae10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Color)>(&::OVRSimpleJSON::JSONNode::WriteColor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5f1a120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "WriteColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Quaternion)>(&::OVRSimpleJSON::JSONNode::ReadQuaternion)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5f1b948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadQuaternion", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadQuaternion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f1ae34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadQuaternion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteQuaternion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Quaternion)>(&::OVRSimpleJSON::JSONNode::WriteQuaternion)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5f1a418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "WriteQuaternion", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Rect)>(&::OVRSimpleJSON::JSONNode::ReadRect)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5f1bb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadRect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f1aeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Rect)>(&::OVRSimpleJSON::JSONNode::WriteRect)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5f1a710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "WriteRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadRectOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RectOffset* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::RectOffset*)>(&::OVRSimpleJSON::JSONNode::ReadRectOffset)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5f1bdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadRectOffset", {}, { ::i2c::type_of<::UnityEngine::RectOffset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadRectOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RectOffset* (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadRectOffset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f1aed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadRectOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteRectOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::RectOffset*)>(&::OVRSimpleJSON::JSONNode::WriteRectOffset)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5f1a9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "WriteRectOffset", {}, { ::i2c::type_of<::UnityEngine::RectOffset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.ReadMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::ReadMatrix)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5f1c074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode.WriteMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONNode::*)(::UnityEngine::Matrix4x4)>(&::OVRSimpleJSON::JSONNode::WriteMatrix)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f1c164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "WriteMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OVRSimpleJSON::JSONNode::*)()>(&::OVRSimpleJSON::JSONNode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f1c210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void OVRSimpleJSON::JSONNode::setStaticF_forceASCII(bool value) {
  ::cordl_internals::setStaticField<bool, "forceASCII", ::OVRSimpleJSON::JSONNode*>(std::forward<bool>(value));
}
inline bool OVRSimpleJSON::JSONNode::getStaticF_forceASCII() {
  return ::cordl_internals::getStaticField<bool, "forceASCII", ::OVRSimpleJSON::JSONNode*>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_longAsString(bool value) {
  ::cordl_internals::setStaticField<bool, "longAsString", ::OVRSimpleJSON::JSONNode*>(std::forward<bool>(value));
}
inline bool OVRSimpleJSON::JSONNode::getStaticF_longAsString() {
  return ::cordl_internals::getStaticField<bool, "longAsString", ::OVRSimpleJSON::JSONNode*>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_allowLineComments(bool value) {
  ::cordl_internals::setStaticField<bool, "allowLineComments", ::OVRSimpleJSON::JSONNode*>(std::forward<bool>(value));
}
inline bool OVRSimpleJSON::JSONNode::getStaticF_allowLineComments() {
  return ::cordl_internals::getStaticField<bool, "allowLineComments", ::OVRSimpleJSON::JSONNode*>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_m_EscapeBuilder(::System::Text::StringBuilder* value) {
  ::cordl_internals::setStaticField<::System::Text::StringBuilder*, "m_EscapeBuilder", ::OVRSimpleJSON::JSONNode*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* OVRSimpleJSON::JSONNode::getStaticF_m_EscapeBuilder() {
  return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "m_EscapeBuilder", ::OVRSimpleJSON::JSONNode*>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_ColorDefaultAlpha(float_t value) {
  ::cordl_internals::setStaticField<float_t, "ColorDefaultAlpha", ::OVRSimpleJSON::JSONNode*>(std::forward<float_t>(value));
}
inline float_t OVRSimpleJSON::JSONNode::getStaticF_ColorDefaultAlpha() {
  return ::cordl_internals::getStaticField<float_t, "ColorDefaultAlpha", ::OVRSimpleJSON::JSONNode*>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_VectorContainerType(::OVRSimpleJSON::JSONContainerType value) {
  ::cordl_internals::setStaticField<::OVRSimpleJSON::JSONContainerType, "VectorContainerType", ::OVRSimpleJSON::JSONNode*>(std::forward<::OVRSimpleJSON::JSONContainerType>(value));
}
inline ::OVRSimpleJSON::JSONContainerType OVRSimpleJSON::JSONNode::getStaticF_VectorContainerType() {
  return ::cordl_internals::getStaticField<::OVRSimpleJSON::JSONContainerType, "VectorContainerType", ::OVRSimpleJSON::JSONNode*>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_QuaternionContainerType(::OVRSimpleJSON::JSONContainerType value) {
  ::cordl_internals::setStaticField<::OVRSimpleJSON::JSONContainerType, "QuaternionContainerType", ::OVRSimpleJSON::JSONNode*>(std::forward<::OVRSimpleJSON::JSONContainerType>(value));
}
inline ::OVRSimpleJSON::JSONContainerType OVRSimpleJSON::JSONNode::getStaticF_QuaternionContainerType() {
  return ::cordl_internals::getStaticField<::OVRSimpleJSON::JSONContainerType, "QuaternionContainerType", ::OVRSimpleJSON::JSONNode*>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_RectContainerType(::OVRSimpleJSON::JSONContainerType value) {
  ::cordl_internals::setStaticField<::OVRSimpleJSON::JSONContainerType, "RectContainerType", ::OVRSimpleJSON::JSONNode*>(std::forward<::OVRSimpleJSON::JSONContainerType>(value));
}
inline ::OVRSimpleJSON::JSONContainerType OVRSimpleJSON::JSONNode::getStaticF_RectContainerType() {
  return ::cordl_internals::getStaticField<::OVRSimpleJSON::JSONContainerType, "RectContainerType", ::OVRSimpleJSON::JSONNode*>();
}
inline void OVRSimpleJSON::JSONNode::setStaticF_ColorContainerType(::OVRSimpleJSON::JSONContainerType value) {
  ::cordl_internals::setStaticField<::OVRSimpleJSON::JSONContainerType, "ColorContainerType", ::OVRSimpleJSON::JSONNode*>(std::forward<::OVRSimpleJSON::JSONContainerType>(value));
}
inline ::OVRSimpleJSON::JSONContainerType OVRSimpleJSON::JSONNode::getStaticF_ColorContainerType() {
  return ::cordl_internals::getStaticField<::OVRSimpleJSON::JSONContainerType, "ColorContainerType", ::OVRSimpleJSON::JSONNode*>();
}
inline ::OVRSimpleJSON::JSONNodeType OVRSimpleJSON::JSONNode::get_Tag() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNodeType>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::get_Item(int32_t aIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aIndex);
}
inline void OVRSimpleJSON::JSONNode::set_Item(int32_t aIndex, ::OVRSimpleJSON::JSONNode* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aIndex, value);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::get_Item(::StringW aKey) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aKey);
}
inline void OVRSimpleJSON::JSONNode::set_Item(::StringW aKey, ::OVRSimpleJSON::JSONNode* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aKey, value);
}
inline ::StringW OVRSimpleJSON::JSONNode::get_Value() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_Value(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t OVRSimpleJSON::JSONNode::get_Count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsNumber() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsBoolean() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsNull() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_IsObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::get_Inline() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_Inline(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OVRSimpleJSON::JSONNode::Add(::StringW aKey, ::OVRSimpleJSON::JSONNode* aItem) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aKey, aItem);
}
inline void OVRSimpleJSON::JSONNode::Add(::OVRSimpleJSON::JSONNode* aItem) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aItem);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Remove(::StringW aKey) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aKey);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Remove(int32_t aIndex) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aIndex);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Remove(::OVRSimpleJSON::JSONNode* aNode) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aNode);
}
inline void OVRSimpleJSON::JSONNode::Clear() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* OVRSimpleJSON::JSONNode::get_Children() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* OVRSimpleJSON::JSONNode::get_DeepChildren() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "get_DeepChildren", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONNode::HasKey(::StringW aKey) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, aKey);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::GetValueOrDefault(::StringW aKey, ::OVRSimpleJSON::JSONNode* aDefault) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aKey, aDefault);
}
inline ::StringW OVRSimpleJSON::JSONNode::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW OVRSimpleJSON::JSONNode::ToString(int32_t aIndent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, aIndent);
}
inline void OVRSimpleJSON::JSONNode::WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
inline ::OVRSimpleJSON::JSONNode_Enumerator OVRSimpleJSON::JSONNode::GetEnumerator() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_Enumerator>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>* OVRSimpleJSON::JSONNode::get_Linq() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "get_Linq", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>*>(this,
                                                                                                                                                                                    ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_KeyEnumerator OVRSimpleJSON::JSONNode::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_KeyEnumerator>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode_ValueEnumerator OVRSimpleJSON::JSONNode::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode_ValueEnumerator>(this, ___internal_method);
}
inline double_t OVRSimpleJSON::JSONNode::get_AsDouble() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsDouble(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t OVRSimpleJSON::JSONNode::get_AsInt() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsInt(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t OVRSimpleJSON::JSONNode::get_AsFloat() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsFloat(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool OVRSimpleJSON::JSONNode::get_AsBool() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsBool(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t OVRSimpleJSON::JSONNode::get_AsLong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsLong(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint64_t OVRSimpleJSON::JSONNode::get_AsULong() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONNode::set_AsULong(uint64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::OVRSimpleJSON::JSONArray* OVRSimpleJSON::JSONNode::get_AsArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONArray*>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONObject* OVRSimpleJSON::JSONNode::get_AsObject() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONObject*>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, s);
}
inline ::StringW OVRSimpleJSON::JSONNode::op_Implicit___StringW(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(double_t n) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, n);
}
inline double_t OVRSimpleJSON::JSONNode::op_Implicit_double_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(float_t n) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, n);
}
inline float_t OVRSimpleJSON::JSONNode::op_Implicit_float_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, n);
}
inline int32_t OVRSimpleJSON::JSONNode::op_Implicit_int32_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(int64_t n) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, n);
}
inline int64_t OVRSimpleJSON::JSONNode::op_Implicit_int64_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(uint64_t n) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, n);
}
inline uint64_t OVRSimpleJSON::JSONNode::op_Implicit_uint64_t(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(bool b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, b);
}
inline bool OVRSimpleJSON::JSONNode::op_Implicit_bool(::OVRSimpleJSON::JSONNode* d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> aKeyValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(),
                                                           { "op_Implicit", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, aKeyValue);
}
inline bool OVRSimpleJSON::JSONNode::op_Equality(::OVRSimpleJSON::JSONNode* a, ::System::Object* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Equality", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool OVRSimpleJSON::JSONNode::op_Inequality(::OVRSimpleJSON::JSONNode* a, ::System::Object* b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Inequality", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool OVRSimpleJSON::JSONNode::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t OVRSimpleJSON::JSONNode::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* OVRSimpleJSON::JSONNode::get_EscapeBuilder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "get_EscapeBuilder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method);
}
inline ::StringW OVRSimpleJSON::JSONNode::Escape(::StringW aText) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "Escape", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, aText);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::ParseElement(::StringW token, bool quoted) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ParseElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, token, quoted);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::Parse(::StringW aJSON) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, aJSON);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::GetContainer(::OVRSimpleJSON::JSONContainerType aType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "GetContainer", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONContainerType>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, aType);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Vector2 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, aVec);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Vector3 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, aVec);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Vector4 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, aVec);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Color aCol) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, aCol);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Quaternion aRot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, aRot);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::Rect aRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, aRect);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::op_Implicit___OVRSimpleJSON__JSONNode_(::UnityEngine::RectOffset* aRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::RectOffset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(nullptr, ___internal_method, aRect);
}
inline ::UnityEngine::Vector2 OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector2(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Vector3 OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector3(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Vector4 OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Vector4(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Color OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Color(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Quaternion OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Quaternion(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Rect OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__Rect(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::RectOffset* OVRSimpleJSON::JSONNode::op_Implicit___UnityEngine__RectOffset_(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "op_Implicit", {}, { ::i2c::type_of<::OVRSimpleJSON::JSONNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*>(nullptr, ___internal_method, aNode);
}
inline ::UnityEngine::Vector2 OVRSimpleJSON::JSONNode::ReadVector2(::UnityEngine::Vector2 aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector2", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Vector2 OVRSimpleJSON::JSONNode::ReadVector2(::StringW aXName, ::StringW aYName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector2", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, aXName, aYName);
}
inline ::UnityEngine::Vector2 OVRSimpleJSON::JSONNode::ReadVector2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteVector2(::UnityEngine::Vector2 aVec, ::StringW aXName, ::StringW aYName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(),
                                                           { "WriteVector2", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aVec, aXName, aYName);
}
inline ::UnityEngine::Vector3 OVRSimpleJSON::JSONNode::ReadVector3(::UnityEngine::Vector3 aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector3", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Vector3 OVRSimpleJSON::JSONNode::ReadVector3(::StringW aXName, ::StringW aYName, ::StringW aZName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector3", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, aXName, aYName, aZName);
}
inline ::UnityEngine::Vector3 OVRSimpleJSON::JSONNode::ReadVector3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteVector3(::UnityEngine::Vector3 aVec, ::StringW aXName, ::StringW aYName, ::StringW aZName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(),
                                       { "WriteVector3", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aVec, aXName, aYName, aZName);
}
inline ::UnityEngine::Vector4 OVRSimpleJSON::JSONNode::ReadVector4(::UnityEngine::Vector4 aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector4", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Vector4 OVRSimpleJSON::JSONNode::ReadVector4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadVector4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteVector4(::UnityEngine::Vector4 aVec) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "WriteVector4", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aVec);
}
inline ::UnityEngine::Color OVRSimpleJSON::JSONNode::ReadColor(::UnityEngine::Color aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Color OVRSimpleJSON::JSONNode::ReadColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteColor(::UnityEngine::Color aCol) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "WriteColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aCol);
}
inline ::UnityEngine::Quaternion OVRSimpleJSON::JSONNode::ReadQuaternion(::UnityEngine::Quaternion aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadQuaternion", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Quaternion OVRSimpleJSON::JSONNode::ReadQuaternion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadQuaternion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteQuaternion(::UnityEngine::Quaternion aRot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "WriteQuaternion", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aRot);
}
inline ::UnityEngine::Rect OVRSimpleJSON::JSONNode::ReadRect(::UnityEngine::Rect aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::Rect OVRSimpleJSON::JSONNode::ReadRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteRect(::UnityEngine::Rect aRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "WriteRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aRect);
}
inline ::UnityEngine::RectOffset* OVRSimpleJSON::JSONNode::ReadRectOffset(::UnityEngine::RectOffset* aDefault) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadRectOffset", {}, { ::i2c::type_of<::UnityEngine::RectOffset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*>(this, ___internal_method, aDefault);
}
inline ::UnityEngine::RectOffset* OVRSimpleJSON::JSONNode::ReadRectOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadRectOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteRectOffset(::UnityEngine::RectOffset* aRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "WriteRectOffset", {}, { ::i2c::type_of<::UnityEngine::RectOffset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aRect);
}
inline ::UnityEngine::Matrix4x4 OVRSimpleJSON::JSONNode::ReadMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "ReadMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::WriteMatrix(::UnityEngine::Matrix4x4 aMatrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { "WriteMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*>(this, ___internal_method, aMatrix);
}
inline void OVRSimpleJSON::JSONNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OVRSimpleJSON::JSONNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OVRSimpleJSON::JSONNode*>());
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONNode::JSONNode() {}

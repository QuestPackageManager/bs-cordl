#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TransitionData.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EasingFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleDataGroup_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeValue_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TransitionData.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TransitionData (::UnityEngine::UIElements::TransitionData::*)()>(&::UnityEngine::UIElements::TransitionData::Copy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6c8f908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionData>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TransitionData.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TransitionData::*)(::by_ref<::UnityEngine::UIElements::TransitionData>)>(
    &::UnityEngine::UIElements::TransitionData::CopyFrom)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6c8fa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionData>(), { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TransitionData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TransitionData.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::TransitionData, ::UnityEngine::UIElements::TransitionData)>(
    &::UnityEngine::UIElements::TransitionData::op_Equality)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c8fc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionData>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::TransitionData>(), ::i2c::type_of<::UnityEngine::UIElements::TransitionData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TransitionData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TransitionData::*)(::UnityEngine::UIElements::TransitionData)>(
    &::UnityEngine::UIElements::TransitionData::Equals)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c8fc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionData>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::TransitionData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TransitionData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TransitionData::*)(::System::Object*)>(&::UnityEngine::UIElements::TransitionData::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6c8fcbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionData>(), { ::i2c::class_of<::UnityEngine::UIElements::TransitionData>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TransitionData.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::TransitionData::*)()>(&::UnityEngine::UIElements::TransitionData::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c8fd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionData>(), { ::i2c::class_of<::UnityEngine::UIElements::TransitionData>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::TransitionData UnityEngine::UIElements::TransitionData::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionData>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TransitionData>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::TransitionData::CopyFrom(::by_ref<::UnityEngine::UIElements::TransitionData> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionData>(), { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TransitionData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::TransitionData::op_Equality(::UnityEngine::UIElements::TransitionData lhs, ::UnityEngine::UIElements::TransitionData rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionData>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::TransitionData>(), ::i2c::type_of<::UnityEngine::UIElements::TransitionData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::TransitionData::Equals(::UnityEngine::UIElements::TransitionData other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionData>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::TransitionData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::TransitionData::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TransitionData>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::TransitionData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TransitionData>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransitionData>"
constexpr UnityEngine::UIElements::TransitionData::operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransitionData>*() {
  return static_cast<::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransitionData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransitionData>"
constexpr ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransitionData>*
UnityEngine::UIElements::TransitionData::i___UnityEngine__UIElements__IStyleDataGroup_1___UnityEngine__UIElements__TransitionData_() {
  return static_cast<::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransitionData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TransitionData>"
constexpr UnityEngine::UIElements::TransitionData::operator ::System::IEquatable_1<::UnityEngine::UIElements::TransitionData>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::TransitionData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TransitionData>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TransitionData>* UnityEngine::UIElements::TransitionData::i___System__IEquatable_1___UnityEngine__UIElements__TransitionData_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::TransitionData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "transitionDelay", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "transitionDuration", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "transitionProperty", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "transitionTimingFunction", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::TransitionData::TransitionData(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* transitionDelay,
                                                                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* transitionDuration,
                                                                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* transitionProperty,
                                                                    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* transitionTimingFunction) noexcept {
  this->transitionDelay = transitionDelay;
  this->transitionDuration = transitionDuration;
  this->transitionProperty = transitionProperty;
  this->transitionTimingFunction = transitionTimingFunction;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TransitionData::TransitionData() {}

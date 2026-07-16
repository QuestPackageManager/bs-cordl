#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TransformData.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TransformData_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleDataGroup_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TransformData.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TransformData (::UnityEngine::UIElements::TransformData::*)()>(&::UnityEngine::UIElements::TransformData::Copy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c8bcd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransformData>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TransformData.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TransformData::*)(::by_ref<::UnityEngine::UIElements::TransformData>)>(
    &::UnityEngine::UIElements::TransformData::CopyFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c8bce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransformData>(), { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TransformData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TransformData.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::TransformData, ::UnityEngine::UIElements::TransformData)>(
    &::UnityEngine::UIElements::TransformData::op_Equality)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6c8bcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransformData>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::TransformData>(), ::i2c::type_of<::UnityEngine::UIElements::TransformData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TransformData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TransformData::*)(::UnityEngine::UIElements::TransformData)>(
    &::UnityEngine::UIElements::TransformData::Equals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c8c03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransformData>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::TransformData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TransformData.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TransformData::*)(::System::Object*)>(&::UnityEngine::UIElements::TransformData::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c8c080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransformData>(), { ::i2c::class_of<::UnityEngine::UIElements::TransformData>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TransformData.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::TransformData::*)()>(&::UnityEngine::UIElements::TransformData::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c8c124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransformData>(), { ::i2c::class_of<::UnityEngine::UIElements::TransformData>(), 2 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::TransformData UnityEngine::UIElements::TransformData::Copy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransformData>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TransformData>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::TransformData::CopyFrom(::by_ref<::UnityEngine::UIElements::TransformData> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransformData>(), { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::TransformData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::TransformData::op_Equality(::UnityEngine::UIElements::TransformData lhs, ::UnityEngine::UIElements::TransformData rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransformData>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::TransformData>(), ::i2c::type_of<::UnityEngine::UIElements::TransformData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::TransformData::Equals(::UnityEngine::UIElements::TransformData other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransformData>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::TransformData>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::TransformData::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TransformData>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::TransformData::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TransformData>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>"
constexpr UnityEngine::UIElements::TransformData::operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>*() {
  return static_cast<::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>"
constexpr ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>*
UnityEngine::UIElements::TransformData::i___UnityEngine__UIElements__IStyleDataGroup_1___UnityEngine__UIElements__TransformData_() {
  return static_cast<::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TransformData>"
constexpr UnityEngine::UIElements::TransformData::operator ::System::IEquatable_1<::UnityEngine::UIElements::TransformData>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::TransformData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TransformData>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TransformData>* UnityEngine::UIElements::TransformData::i___System__IEquatable_1___UnityEngine__UIElements__TransformData_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::TransformData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "rotate", ty: "::UnityEngine::UIElements::Rotate", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "::UnityEngine::UIElements::Scale",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "transformOrigin", ty: "::UnityEngine::UIElements::TransformOrigin", modifiers: "", def_value: Some("{}") }, CppParam { name: "translate",
// ty: "::UnityEngine::UIElements::Translate", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::TransformData::TransformData(::UnityEngine::UIElements::Rotate rotate, ::UnityEngine::UIElements::Scale scale,
                                                                  ::UnityEngine::UIElements::TransformOrigin transformOrigin, ::UnityEngine::UIElements::Translate translate) noexcept {
  this->rotate = rotate;
  this->scale = scale;
  this->transformOrigin = transformOrigin;
  this->translate = translate;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TransformData::TransformData() {}

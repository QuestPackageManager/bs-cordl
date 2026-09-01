#pragma once
// IWYU pragma private; include "UnityEngine\AttributeHelperEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__DisallowMultipleComponent_impl.hpp"
#include "UnityEngine/zzzz__ExecuteInEditMode_impl.hpp"
#include "UnityEngine/zzzz__RequireComponent_impl.hpp"
#include "UnityEngine/zzzz__AttributeHelperEngine_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::AttributeHelperEngine.GetParentTypeDisallowingMultipleInclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::UnityEngine::AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6ada1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AttributeHelperEngine*>(), { "GetParentTypeDisallowingMultipleInclusion", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AttributeHelperEngine.GetRequiredComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (*)(::System::Type*)>(&::UnityEngine::AttributeHelperEngine::GetRequiredComponents)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x6ada2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AttributeHelperEngine*>(), { "GetRequiredComponents", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AttributeHelperEngine.GetExecuteMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::UnityEngine::AttributeHelperEngine::GetExecuteMode)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6ada764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AttributeHelperEngine*>(), { "GetExecuteMode", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AttributeHelperEngine.CheckIsEditorScript
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::UnityEngine::AttributeHelperEngine::CheckIsEditorScript)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6ada868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AttributeHelperEngine*>(), { "CheckIsEditorScript", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AttributeHelperEngine.GetDefaultExecutionOrderFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::UnityEngine::AttributeHelperEngine::GetDefaultExecutionOrderFor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ada940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AttributeHelperEngine*>(), { "GetDefaultExecutionOrderFor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AttributeHelperEngine::setStaticF__disallowMultipleComponentArray(::ArrayW<::UnityEngine::DisallowMultipleComponent*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::DisallowMultipleComponent*>, "_disallowMultipleComponentArray", ::UnityEngine::AttributeHelperEngine*>(
      std::forward<::ArrayW<::UnityEngine::DisallowMultipleComponent*>>(value));
}
inline ::ArrayW<::UnityEngine::DisallowMultipleComponent*> UnityEngine::AttributeHelperEngine::getStaticF__disallowMultipleComponentArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::DisallowMultipleComponent*>, "_disallowMultipleComponentArray", ::UnityEngine::AttributeHelperEngine*>();
}
inline void UnityEngine::AttributeHelperEngine::setStaticF__executeInEditModeArray(::ArrayW<::UnityEngine::ExecuteInEditMode*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::ExecuteInEditMode*>, "_executeInEditModeArray", ::UnityEngine::AttributeHelperEngine*>(
      std::forward<::ArrayW<::UnityEngine::ExecuteInEditMode*>>(value));
}
inline ::ArrayW<::UnityEngine::ExecuteInEditMode*> UnityEngine::AttributeHelperEngine::getStaticF__executeInEditModeArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::ExecuteInEditMode*>, "_executeInEditModeArray", ::UnityEngine::AttributeHelperEngine*>();
}
inline void UnityEngine::AttributeHelperEngine::setStaticF__requireComponentArray(::ArrayW<::UnityEngine::RequireComponent*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::RequireComponent*>, "_requireComponentArray", ::UnityEngine::AttributeHelperEngine*>(
      std::forward<::ArrayW<::UnityEngine::RequireComponent*>>(value));
}
inline ::ArrayW<::UnityEngine::RequireComponent*> UnityEngine::AttributeHelperEngine::getStaticF__requireComponentArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::RequireComponent*>, "_requireComponentArray", ::UnityEngine::AttributeHelperEngine*>();
}
inline ::System::Type* UnityEngine::AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AttributeHelperEngine*>(), { "GetParentTypeDisallowingMultipleInclusion", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::System::Type*> UnityEngine::AttributeHelperEngine::GetRequiredComponents(::System::Type* klass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AttributeHelperEngine*>(), { "GetRequiredComponents", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(nullptr, ___internal_method, klass);
}
inline int32_t UnityEngine::AttributeHelperEngine::GetExecuteMode(::System::Type* klass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AttributeHelperEngine*>(), { "GetExecuteMode", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, klass);
}
inline int32_t UnityEngine::AttributeHelperEngine::CheckIsEditorScript(::System::Type* klass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AttributeHelperEngine*>(), { "CheckIsEditorScript", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, klass);
}
inline int32_t UnityEngine::AttributeHelperEngine::GetDefaultExecutionOrderFor(::System::Type* klass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AttributeHelperEngine*>(), { "GetDefaultExecutionOrderFor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, klass);
}
template <typename T> inline T UnityEngine::AttributeHelperEngine::GetCustomAttributeOfType(::System::Type* klass) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AttributeHelperEngine*>(), { "GetCustomAttributeOfType", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Type*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, klass);
}
// Ctor Parameters []
constexpr ::UnityEngine::AttributeHelperEngine::AttributeHelperEngine() {}

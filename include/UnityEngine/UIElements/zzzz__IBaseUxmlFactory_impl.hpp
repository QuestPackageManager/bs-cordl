#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IBaseUxmlFactory.hpp"
#include "UnityEngine/UIElements/zzzz__IBaseUxmlFactory_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IBaseUxmlFactory.get_uxmlQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::IBaseUxmlFactory::*)()>(&::UnityEngine::UIElements::IBaseUxmlFactory::get_uxmlQualifiedName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IBaseUxmlFactory*>(), { ::i2c::class_of<::UnityEngine::UIElements::IBaseUxmlFactory*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IBaseUxmlFactory.get_uxmlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::UIElements::IBaseUxmlFactory::*)()>(&::UnityEngine::UIElements::IBaseUxmlFactory::get_uxmlType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IBaseUxmlFactory*>(), { ::i2c::class_of<::UnityEngine::UIElements::IBaseUxmlFactory*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IBaseUxmlFactory.AcceptsAttributeBag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IBaseUxmlFactory::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::IBaseUxmlFactory::AcceptsAttributeBag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IBaseUxmlFactory*>(), { ::i2c::class_of<::UnityEngine::UIElements::IBaseUxmlFactory*>(), 2 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::IBaseUxmlFactory::get_uxmlQualifiedName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IBaseUxmlFactory*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* UnityEngine::UIElements::IBaseUxmlFactory::get_uxmlType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IBaseUxmlFactory*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IBaseUxmlFactory::AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IBaseUxmlFactory*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bag, cc);
}

#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UxmlAttributeOverridesFactory.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeOverridesFactory_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeOverridesTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeOverridesFactory.get_uxmlName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::UxmlAttributeOverridesFactory::*)()>(
    &::UnityEngine::UIElements::UxmlAttributeOverridesFactory::get_uxmlName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6cbb974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeOverridesFactory*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeOverridesFactory*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeOverridesFactory.get_uxmlQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::UxmlAttributeOverridesFactory::*)()>(
    &::UnityEngine::UIElements::UxmlAttributeOverridesFactory::get_uxmlQualifiedName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cbb9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeOverridesFactory*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeOverridesFactory*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeOverridesFactory.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (
    ::UnityEngine::UIElements::UxmlAttributeOverridesFactory::*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::UxmlAttributeOverridesFactory::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cbba30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeOverridesFactory*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeOverridesFactory*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlAttributeOverridesFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlAttributeOverridesFactory::*)()>(&::UnityEngine::UIElements::UxmlAttributeOverridesFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6cbba38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeOverridesFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::UxmlAttributeOverridesFactory::get_uxmlName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeOverridesFactory*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::UxmlAttributeOverridesFactory::get_uxmlQualifiedName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeOverridesFactory*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UxmlAttributeOverridesFactory::Create(::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                                ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeOverridesFactory*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, bag, cc);
}
inline void UnityEngine::UIElements::UxmlAttributeOverridesFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlAttributeOverridesFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlAttributeOverridesFactory* UnityEngine::UIElements::UxmlAttributeOverridesFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlAttributeOverridesFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlAttributeOverridesFactory::UxmlAttributeOverridesFactory() {}

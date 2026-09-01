#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UxmlRootElementFactory.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlRootElementFactory_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlRootElementTraits_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlRootElementFactory.get_uxmlName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::UxmlRootElementFactory::*)()>(&::UnityEngine::UIElements::UxmlRootElementFactory::get_uxmlName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6cbb32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementFactory*>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementFactory*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlRootElementFactory.get_uxmlQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::UxmlRootElementFactory::*)()>(&::UnityEngine::UIElements::UxmlRootElementFactory::get_uxmlQualifiedName)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cbb370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementFactory*>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementFactory*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlRootElementFactory.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::UxmlRootElementFactory::*)(::UnityEngine::UIElements::IUxmlAttributes*,
                                                                                                                                                        ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::UxmlRootElementFactory::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cbb3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementFactory*>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementFactory*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlRootElementFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlRootElementFactory::*)()>(&::UnityEngine::UIElements::UxmlRootElementFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6cbb3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::UxmlRootElementFactory::get_uxmlName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementFactory*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::UxmlRootElementFactory::get_uxmlQualifiedName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementFactory*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UxmlRootElementFactory::Create(::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                         ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementFactory*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, bag, cc);
}
inline void UnityEngine::UIElements::UxmlRootElementFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlRootElementFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlRootElementFactory* UnityEngine::UIElements::UxmlRootElementFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlRootElementFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlRootElementFactory::UxmlRootElementFactory() {}

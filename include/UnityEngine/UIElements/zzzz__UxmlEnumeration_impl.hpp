#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UxmlEnumeration.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeRestriction_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumeration_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeRestriction_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlEnumeration.get_values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::UIElements::UxmlEnumeration::*)()>(
    &::UnityEngine::UIElements::UxmlEnumeration::get_values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cc13fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlEnumeration*>(), { "get_values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlEnumeration.set_values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlEnumeration::*)(::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::UnityEngine::UIElements::UxmlEnumeration::set_values)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6cc1404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlEnumeration*>(),
                                                                                           { "set_values", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlEnumeration.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlEnumeration::*)(::UnityEngine::UIElements::UxmlTypeRestriction*)>(
    &::UnityEngine::UIElements::UxmlEnumeration::Equals)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6cc1464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlEnumeration*>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlEnumeration*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlEnumeration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlEnumeration::*)()>(&::UnityEngine::UIElements::UxmlEnumeration::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6cc15ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlEnumeration*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& UnityEngine::UIElements::UxmlEnumeration::__cordl_internal_get_m_Values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& UnityEngine::UIElements::UxmlEnumeration::__cordl_internal_get_m_Values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Values;
}
constexpr void UnityEngine::UIElements::UxmlEnumeration::__cordl_internal_set_m_Values(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Values = value;
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::UIElements::UxmlEnumeration::get_values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlEnumeration*>(), { "get_values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UxmlEnumeration::set_values(::System::Collections::Generic::IEnumerable_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlEnumeration*>(),
                                                                                         { "set_values", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UxmlEnumeration::Equals(::UnityEngine::UIElements::UxmlTypeRestriction* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlEnumeration*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline void UnityEngine::UIElements::UxmlEnumeration::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlEnumeration*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlEnumeration* UnityEngine::UIElements::UxmlEnumeration::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlEnumeration*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlEnumeration::UxmlEnumeration() {}

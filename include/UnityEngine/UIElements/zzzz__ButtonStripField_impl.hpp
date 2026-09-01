#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ButtonStripField.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ButtonStripField_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ButtonStripField_def.hpp"
#include "UnityEngine/UIElements/zzzz__Button_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ButtonStripField_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ButtonStripField_UxmlFactory::*)()>(&::UnityEngine::UIElements::ButtonStripField_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d39440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ButtonStripField_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ButtonStripField_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ButtonStripField_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ButtonStripField_UxmlFactory* UnityEngine::UIElements::ButtonStripField_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ButtonStripField_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ButtonStripField_UxmlFactory::ButtonStripField_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ButtonStripField_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ButtonStripField_UxmlTraits::*)()>(&::UnityEngine::UIElements::ButtonStripField_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6d394a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ButtonStripField_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ButtonStripField_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ButtonStripField_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ButtonStripField_UxmlTraits* UnityEngine::UIElements::ButtonStripField_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ButtonStripField_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ButtonStripField_UxmlTraits::ButtonStripField_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::ButtonStripField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ButtonStripField::*)()>(&::UnityEngine::UIElements::ButtonStripField::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6d39200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ButtonStripField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ButtonStripField.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ButtonStripField::*)(int32_t)>(&::UnityEngine::UIElements::ButtonStripField::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6d392c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ButtonStripField*>(), { ::i2c::class_of<::UnityEngine::UIElements::ButtonStripField*>(), 153 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ButtonStripField.RefreshButtonsState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ButtonStripField::*)()>(&::UnityEngine::UIElements::ButtonStripField::RefreshButtonsState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6d39358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ButtonStripField*>(), { "RefreshButtonsState", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>*& UnityEngine::UIElements::ButtonStripField::__cordl_internal_get_m_Buttons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buttons;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* const& UnityEngine::UIElements::ButtonStripField::__cordl_internal_get_m_Buttons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Buttons;
}
constexpr void UnityEngine::UIElements::ButtonStripField::__cordl_internal_set_m_Buttons(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Button*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Buttons = value;
}
inline void UnityEngine::UIElements::ButtonStripField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ButtonStripField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ButtonStripField::SetValueWithoutNotify(int32_t newValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ButtonStripField*>(), 153 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::ButtonStripField::RefreshButtonsState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ButtonStripField*>(), { "RefreshButtonsState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ButtonStripField* UnityEngine::UIElements::ButtonStripField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ButtonStripField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ButtonStripField::ButtonStripField() {}

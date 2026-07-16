#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BoundsField.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BoundsField_def.hpp"
#include "UnityEngine/UIElements/zzzz__BoundsField_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFloatAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vector3Field_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsField_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BoundsField_UxmlFactory::*)()>(&::UnityEngine::UIElements::BoundsField_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d339dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::BoundsField_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BoundsField_UxmlFactory* UnityEngine::UIElements::BoundsField_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BoundsField_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BoundsField_UxmlFactory::BoundsField_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsField_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BoundsField_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::BoundsField_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x6d33a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::BoundsField_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsField_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BoundsField_UxmlTraits::*)()>(&::UnityEngine::UIElements::BoundsField_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6d33ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_get_m_CenterXValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterXValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_get_m_CenterXValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterXValue;
}
constexpr void UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_set_m_CenterXValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CenterXValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_get_m_CenterYValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterYValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_get_m_CenterYValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterYValue;
}
constexpr void UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_set_m_CenterYValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CenterYValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_get_m_CenterZValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterZValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_get_m_CenterZValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterZValue;
}
constexpr void UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_set_m_CenterZValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CenterZValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_get_m_ExtentsXValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtentsXValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_get_m_ExtentsXValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtentsXValue;
}
constexpr void UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_set_m_ExtentsXValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExtentsXValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_get_m_ExtentsYValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtentsYValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_get_m_ExtentsYValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtentsYValue;
}
constexpr void UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_set_m_ExtentsYValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExtentsYValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_get_m_ExtentsZValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtentsZValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_get_m_ExtentsZValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtentsZValue;
}
constexpr void UnityEngine::UIElements::BoundsField_UxmlTraits::__cordl_internal_set_m_ExtentsZValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExtentsZValue = value;
}
inline void UnityEngine::UIElements::BoundsField_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                  ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BoundsField_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::BoundsField_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BoundsField_UxmlTraits* UnityEngine::UIElements::BoundsField_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BoundsField_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BoundsField_UxmlTraits::BoundsField_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BoundsField::*)()>(&::UnityEngine::UIElements::BoundsField::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d330d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BoundsField::*)(::StringW)>(&::UnityEngine::UIElements::BoundsField::_ctor)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x6d330d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsField.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BoundsField::*)(::UnityEngine::Bounds)>(&::UnityEngine::UIElements::BoundsField::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6d335c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(), { ::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(), 153 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsField.UpdateMixedValueContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BoundsField::*)()>(&::UnityEngine::UIElements::BoundsField::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6d33698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(), { ::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(), 152 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsField.__ctor_b__11_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BoundsField::*)(::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3>*)>(
    &::UnityEngine::UIElements::BoundsField::__ctor_b__11_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6d33864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(),
                                                             { "<.ctor>b__11_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BoundsField.__ctor_b__11_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::BoundsField::*)(::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3>*)>(
    &::UnityEngine::UIElements::BoundsField::__ctor_b__11_1)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6d33920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(),
                                                             { "<.ctor>b__11_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Vector3Field*& UnityEngine::UIElements::BoundsField::__cordl_internal_get_m_CenterField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterField;
}
constexpr ::UnityEngine::UIElements::Vector3Field* const& UnityEngine::UIElements::BoundsField::__cordl_internal_get_m_CenterField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CenterField;
}
constexpr void UnityEngine::UIElements::BoundsField::__cordl_internal_set_m_CenterField(::UnityEngine::UIElements::Vector3Field* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CenterField = value;
}
constexpr ::UnityEngine::UIElements::Vector3Field*& UnityEngine::UIElements::BoundsField::__cordl_internal_get_m_ExtentsField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtentsField;
}
constexpr ::UnityEngine::UIElements::Vector3Field* const& UnityEngine::UIElements::BoundsField::__cordl_internal_get_m_ExtentsField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExtentsField;
}
constexpr void UnityEngine::UIElements::BoundsField::__cordl_internal_set_m_ExtentsField(::UnityEngine::UIElements::Vector3Field* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExtentsField = value;
}
inline void UnityEngine::UIElements::BoundsField::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::BoundsField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BoundsField::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::BoundsField*>();
}
inline void UnityEngine::UIElements::BoundsField::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::BoundsField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BoundsField::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::BoundsField*>();
}
inline void UnityEngine::UIElements::BoundsField::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::BoundsField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BoundsField::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::BoundsField*>();
}
inline void UnityEngine::UIElements::BoundsField::setStaticF_centerFieldUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "centerFieldUssClassName", ::UnityEngine::UIElements::BoundsField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BoundsField::getStaticF_centerFieldUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "centerFieldUssClassName", ::UnityEngine::UIElements::BoundsField*>();
}
inline void UnityEngine::UIElements::BoundsField::setStaticF_extentsFieldUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "extentsFieldUssClassName", ::UnityEngine::UIElements::BoundsField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BoundsField::getStaticF_extentsFieldUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "extentsFieldUssClassName", ::UnityEngine::UIElements::BoundsField*>();
}
inline void UnityEngine::UIElements::BoundsField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BoundsField::_ctor(::StringW label) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline void UnityEngine::UIElements::BoundsField::SetValueWithoutNotify(::UnityEngine::Bounds newValue) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(), 153 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::BoundsField::UpdateMixedValueContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(), 152 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BoundsField::__ctor_b__11_0(::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3>* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(),
                                                           { "<.ctor>b__11_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::BoundsField::__ctor_b__11_1(::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3>* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::BoundsField*>(),
                                                           { "<.ctor>b__11_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::ChangeEvent_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::UnityEngine::UIElements::BoundsField* UnityEngine::UIElements::BoundsField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BoundsField*>());
}
inline ::UnityEngine::UIElements::BoundsField* UnityEngine::UIElements::BoundsField::New_ctor(::StringW label) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::BoundsField*>(label));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BoundsField::BoundsField() {}

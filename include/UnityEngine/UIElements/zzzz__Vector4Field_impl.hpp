#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Vector4Field.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vector4Field_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__FloatField_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFloatAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vector4Field_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector4Field_UxmlFactory::*)()>(&::UnityEngine::UIElements::Vector4Field_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d3c774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Vector4Field_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Vector4Field_UxmlFactory* UnityEngine::UIElements::Vector4Field_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector4Field_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector4Field_UxmlFactory::Vector4Field_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector4Field_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::Vector4Field_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6d3c7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::Vector4Field_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector4Field_UxmlTraits::*)()>(&::UnityEngine::UIElements::Vector4Field_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6d3c9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Vector4Field_UxmlTraits::__cordl_internal_get_m_XValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Vector4Field_UxmlTraits::__cordl_internal_get_m_XValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XValue;
}
constexpr void UnityEngine::UIElements::Vector4Field_UxmlTraits::__cordl_internal_set_m_XValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Vector4Field_UxmlTraits::__cordl_internal_get_m_YValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Vector4Field_UxmlTraits::__cordl_internal_get_m_YValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YValue;
}
constexpr void UnityEngine::UIElements::Vector4Field_UxmlTraits::__cordl_internal_set_m_YValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_YValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Vector4Field_UxmlTraits::__cordl_internal_get_m_ZValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Vector4Field_UxmlTraits::__cordl_internal_get_m_ZValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZValue;
}
constexpr void UnityEngine::UIElements::Vector4Field_UxmlTraits::__cordl_internal_set_m_ZValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ZValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Vector4Field_UxmlTraits::__cordl_internal_get_m_WValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Vector4Field_UxmlTraits::__cordl_internal_get_m_WValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WValue;
}
constexpr void UnityEngine::UIElements::Vector4Field_UxmlTraits::__cordl_internal_set_m_WValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WValue = value;
}
inline void UnityEngine::UIElements::Vector4Field_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                   ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Vector4Field_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::Vector4Field_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Vector4Field_UxmlTraits* UnityEngine::UIElements::Vector4Field_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector4Field_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector4Field_UxmlTraits::Vector4Field_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector4Field___c::*)()>(&::UnityEngine::UIElements::Vector4Field___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d3cb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field___c._DescribeFields_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Vector4Field___c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d3cb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(), { "<DescribeFields>b__0_0", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field___c._DescribeFields_b__0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector4Field___c::*)(::by_ref<::UnityEngine::Vector4>, float_t)>(
    &::UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3cba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(),
                                                             { "<DescribeFields>b__0_1", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field___c._DescribeFields_b__0_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Vector4Field___c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3cba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(), { "<DescribeFields>b__0_2", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field___c._DescribeFields_b__0_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector4Field___c::*)(::by_ref<::UnityEngine::Vector4>, float_t)>(
    &::UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3cbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(),
                                                             { "<DescribeFields>b__0_3", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field___c._DescribeFields_b__0_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Vector4Field___c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3cbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(), { "<DescribeFields>b__0_4", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field___c._DescribeFields_b__0_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector4Field___c::*)(::by_ref<::UnityEngine::Vector4>, float_t)>(
    &::UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3cbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(),
                                                             { "<DescribeFields>b__0_5", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field___c._DescribeFields_b__0_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Vector4Field___c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3cbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(), { "<DescribeFields>b__0_6", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field___c._DescribeFields_b__0_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector4Field___c::*)(::by_ref<::UnityEngine::Vector4>, float_t)>(
    &::UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_7)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3cbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(),
                                                             { "<DescribeFields>b__0_7", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Vector4Field___c::setStaticF___9(::UnityEngine::UIElements::Vector4Field___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Vector4Field___c*, "<>9", ::UnityEngine::UIElements::Vector4Field___c*>(
      std::forward<::UnityEngine::UIElements::Vector4Field___c*>(value));
}
inline ::UnityEngine::UIElements::Vector4Field___c* UnityEngine::UIElements::Vector4Field___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Vector4Field___c*, "<>9", ::UnityEngine::UIElements::Vector4Field___c*>();
}
inline void UnityEngine::UIElements::Vector4Field___c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::Vector4, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_0", ::UnityEngine::UIElements::Vector4Field___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, float_t>* UnityEngine::UIElements::Vector4Field___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_0", ::UnityEngine::UIElements::Vector4Field___c*>();
}
inline void UnityEngine::UIElements::Vector4Field___c::setStaticF___9__0_1(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                    "<>9__0_1", ::UnityEngine::UIElements::Vector4Field___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*
UnityEngine::UIElements::Vector4Field___c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                           "<>9__0_1", ::UnityEngine::UIElements::Vector4Field___c*>();
}
inline void UnityEngine::UIElements::Vector4Field___c::setStaticF___9__0_2(::System::Func_2<::UnityEngine::Vector4, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_2", ::UnityEngine::UIElements::Vector4Field___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, float_t>* UnityEngine::UIElements::Vector4Field___c::getStaticF___9__0_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_2", ::UnityEngine::UIElements::Vector4Field___c*>();
}
inline void UnityEngine::UIElements::Vector4Field___c::setStaticF___9__0_3(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                    "<>9__0_3", ::UnityEngine::UIElements::Vector4Field___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*
UnityEngine::UIElements::Vector4Field___c::getStaticF___9__0_3() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                           "<>9__0_3", ::UnityEngine::UIElements::Vector4Field___c*>();
}
inline void UnityEngine::UIElements::Vector4Field___c::setStaticF___9__0_4(::System::Func_2<::UnityEngine::Vector4, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_4", ::UnityEngine::UIElements::Vector4Field___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, float_t>* UnityEngine::UIElements::Vector4Field___c::getStaticF___9__0_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_4", ::UnityEngine::UIElements::Vector4Field___c*>();
}
inline void UnityEngine::UIElements::Vector4Field___c::setStaticF___9__0_5(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                    "<>9__0_5", ::UnityEngine::UIElements::Vector4Field___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*
UnityEngine::UIElements::Vector4Field___c::getStaticF___9__0_5() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                           "<>9__0_5", ::UnityEngine::UIElements::Vector4Field___c*>();
}
inline void UnityEngine::UIElements::Vector4Field___c::setStaticF___9__0_6(::System::Func_2<::UnityEngine::Vector4, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_6", ::UnityEngine::UIElements::Vector4Field___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, float_t>* UnityEngine::UIElements::Vector4Field___c::getStaticF___9__0_6() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_6", ::UnityEngine::UIElements::Vector4Field___c*>();
}
inline void UnityEngine::UIElements::Vector4Field___c::setStaticF___9__0_7(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                    "<>9__0_7", ::UnityEngine::UIElements::Vector4Field___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*
UnityEngine::UIElements::Vector4Field___c::getStaticF___9__0_7() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                           "<>9__0_7", ::UnityEngine::UIElements::Vector4Field___c*>();
}
inline void UnityEngine::UIElements::Vector4Field___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_0(::UnityEngine::Vector4 r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(), { "<DescribeFields>b__0_0", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_1(::by_ref<::UnityEngine::Vector4> r, float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(),
                                                           { "<DescribeFields>b__0_1", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline float_t UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_2(::UnityEngine::Vector4 r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(), { "<DescribeFields>b__0_2", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_3(::by_ref<::UnityEngine::Vector4> r, float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(),
                                                           { "<DescribeFields>b__0_3", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline float_t UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_4(::UnityEngine::Vector4 r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(), { "<DescribeFields>b__0_4", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_5(::by_ref<::UnityEngine::Vector4> r, float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(),
                                                           { "<DescribeFields>b__0_5", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline float_t UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_6(::UnityEngine::Vector4 r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(), { "<DescribeFields>b__0_6", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::Vector4Field___c::_DescribeFields_b__0_7(::by_ref<::UnityEngine::Vector4> r, float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field___c*>(),
                                                           { "<DescribeFields>b__0_7", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline ::UnityEngine::UIElements::Vector4Field___c* UnityEngine::UIElements::Vector4Field___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector4Field___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector4Field___c::Vector4Field___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field.DescribeFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>> (::UnityEngine::UIElements::Vector4Field::*)()>(
    &::UnityEngine::UIElements::Vector4Field::DescribeFields)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x6d3bf94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field*>(), { ::i2c::class_of<::UnityEngine::UIElements::Vector4Field*>(), 154 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector4Field::*)()>(&::UnityEngine::UIElements::Vector4Field::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3c564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector4Field::*)(::StringW)>(&::UnityEngine::UIElements::Vector4Field::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6d3c56c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Vector4Field::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Vector4Field*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Vector4Field::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Vector4Field*>();
}
inline void UnityEngine::UIElements::Vector4Field::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::Vector4Field*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Vector4Field::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::Vector4Field*>();
}
inline void UnityEngine::UIElements::Vector4Field::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::Vector4Field*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Vector4Field::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::Vector4Field*>();
}
inline ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>>
UnityEngine::UIElements::Vector4Field::DescribeFields() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Vector4Field*>(), 154 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>>>(
      this, ___internal_method);
}
inline void UnityEngine::UIElements::Vector4Field::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Vector4Field::_ctor(::StringW label) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector4Field*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline ::UnityEngine::UIElements::Vector4Field* UnityEngine::UIElements::Vector4Field::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector4Field*>());
}
inline ::UnityEngine::UIElements::Vector4Field* UnityEngine::UIElements::Vector4Field::New_ctor(::StringW label) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector4Field*>(label));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector4Field::Vector4Field() {}

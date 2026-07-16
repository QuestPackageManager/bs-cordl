#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Vector3Field.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vector3Field_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__FloatField_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFloatAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vector3Field_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector3Field_UxmlFactory::*)()>(&::UnityEngine::UIElements::Vector3Field_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d3863c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Vector3Field_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Vector3Field_UxmlFactory* UnityEngine::UIElements::Vector3Field_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector3Field_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector3Field_UxmlFactory::Vector3Field_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector3Field_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::Vector3Field_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6d386a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::Vector3Field_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector3Field_UxmlTraits::*)()>(&::UnityEngine::UIElements::Vector3Field_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6d3886c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Vector3Field_UxmlTraits::__cordl_internal_get_m_XValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Vector3Field_UxmlTraits::__cordl_internal_get_m_XValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XValue;
}
constexpr void UnityEngine::UIElements::Vector3Field_UxmlTraits::__cordl_internal_set_m_XValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Vector3Field_UxmlTraits::__cordl_internal_get_m_YValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Vector3Field_UxmlTraits::__cordl_internal_get_m_YValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YValue;
}
constexpr void UnityEngine::UIElements::Vector3Field_UxmlTraits::__cordl_internal_set_m_YValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_YValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::Vector3Field_UxmlTraits::__cordl_internal_get_m_ZValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZValue;
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& UnityEngine::UIElements::Vector3Field_UxmlTraits::__cordl_internal_get_m_ZValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZValue;
}
constexpr void UnityEngine::UIElements::Vector3Field_UxmlTraits::__cordl_internal_set_m_ZValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ZValue = value;
}
inline void UnityEngine::UIElements::Vector3Field_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                   ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Vector3Field_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::Vector3Field_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Vector3Field_UxmlTraits* UnityEngine::UIElements::Vector3Field_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector3Field_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector3Field_UxmlTraits::Vector3Field_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector3Field___c::*)()>(&::UnityEngine::UIElements::Vector3Field___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d389dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field___c._DescribeFields_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Vector3Field___c::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::Vector3Field___c::_DescribeFields_b__0_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d389e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(), { "<DescribeFields>b__0_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field___c._DescribeFields_b__0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector3Field___c::*)(::by_ref<::UnityEngine::Vector3>, float_t)>(
    &::UnityEngine::UIElements::Vector3Field___c::_DescribeFields_b__0_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d389e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(),
                                                             { "<DescribeFields>b__0_1", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field___c._DescribeFields_b__0_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Vector3Field___c::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::Vector3Field___c::_DescribeFields_b__0_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d389ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(), { "<DescribeFields>b__0_2", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field___c._DescribeFields_b__0_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector3Field___c::*)(::by_ref<::UnityEngine::Vector3>, float_t)>(
    &::UnityEngine::UIElements::Vector3Field___c::_DescribeFields_b__0_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d389f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(),
                                                             { "<DescribeFields>b__0_3", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field___c._DescribeFields_b__0_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Vector3Field___c::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::Vector3Field___c::_DescribeFields_b__0_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d389fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(), { "<DescribeFields>b__0_4", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field___c._DescribeFields_b__0_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector3Field___c::*)(::by_ref<::UnityEngine::Vector3>, float_t)>(
    &::UnityEngine::UIElements::Vector3Field___c::_DescribeFields_b__0_5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d38a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(),
                                                             { "<DescribeFields>b__0_5", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Vector3Field___c::setStaticF___9(::UnityEngine::UIElements::Vector3Field___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Vector3Field___c*, "<>9", ::UnityEngine::UIElements::Vector3Field___c*>(
      std::forward<::UnityEngine::UIElements::Vector3Field___c*>(value));
}
inline ::UnityEngine::UIElements::Vector3Field___c* UnityEngine::UIElements::Vector3Field___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Vector3Field___c*, "<>9", ::UnityEngine::UIElements::Vector3Field___c*>();
}
inline void UnityEngine::UIElements::Vector3Field___c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__0_0", ::UnityEngine::UIElements::Vector3Field___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3, float_t>* UnityEngine::UIElements::Vector3Field___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__0_0", ::UnityEngine::UIElements::Vector3Field___c*>();
}
inline void UnityEngine::UIElements::Vector3Field___c::setStaticF___9__0_1(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                    "<>9__0_1", ::UnityEngine::UIElements::Vector3Field___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>*
UnityEngine::UIElements::Vector3Field___c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                           "<>9__0_1", ::UnityEngine::UIElements::Vector3Field___c*>();
}
inline void UnityEngine::UIElements::Vector3Field___c::setStaticF___9__0_2(::System::Func_2<::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__0_2", ::UnityEngine::UIElements::Vector3Field___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3, float_t>* UnityEngine::UIElements::Vector3Field___c::getStaticF___9__0_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__0_2", ::UnityEngine::UIElements::Vector3Field___c*>();
}
inline void UnityEngine::UIElements::Vector3Field___c::setStaticF___9__0_3(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                    "<>9__0_3", ::UnityEngine::UIElements::Vector3Field___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>*
UnityEngine::UIElements::Vector3Field___c::getStaticF___9__0_3() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                           "<>9__0_3", ::UnityEngine::UIElements::Vector3Field___c*>();
}
inline void UnityEngine::UIElements::Vector3Field___c::setStaticF___9__0_4(::System::Func_2<::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__0_4", ::UnityEngine::UIElements::Vector3Field___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector3, float_t>* UnityEngine::UIElements::Vector3Field___c::getStaticF___9__0_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector3, float_t>*, "<>9__0_4", ::UnityEngine::UIElements::Vector3Field___c*>();
}
inline void UnityEngine::UIElements::Vector3Field___c::setStaticF___9__0_5(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                    "<>9__0_5", ::UnityEngine::UIElements::Vector3Field___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>*
UnityEngine::UIElements::Vector3Field___c::getStaticF___9__0_5() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                           "<>9__0_5", ::UnityEngine::UIElements::Vector3Field___c*>();
}
inline void UnityEngine::UIElements::Vector3Field___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::Vector3Field___c::_DescribeFields_b__0_0(::UnityEngine::Vector3 r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(), { "<DescribeFields>b__0_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::Vector3Field___c::_DescribeFields_b__0_1(::by_ref<::UnityEngine::Vector3> r, float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(),
                                                           { "<DescribeFields>b__0_1", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline float_t UnityEngine::UIElements::Vector3Field___c::_DescribeFields_b__0_2(::UnityEngine::Vector3 r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(), { "<DescribeFields>b__0_2", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::Vector3Field___c::_DescribeFields_b__0_3(::by_ref<::UnityEngine::Vector3> r, float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(),
                                                           { "<DescribeFields>b__0_3", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline float_t UnityEngine::UIElements::Vector3Field___c::_DescribeFields_b__0_4(::UnityEngine::Vector3 r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(), { "<DescribeFields>b__0_4", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::Vector3Field___c::_DescribeFields_b__0_5(::by_ref<::UnityEngine::Vector3> r, float_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field___c*>(),
                                                           { "<DescribeFields>b__0_5", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline ::UnityEngine::UIElements::Vector3Field___c* UnityEngine::UIElements::Vector3Field___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector3Field___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector3Field___c::Vector3Field___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field.DescribeFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>> (::UnityEngine::UIElements::Vector3Field::*)()>(
    &::UnityEngine::UIElements::Vector3Field::DescribeFields)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x6d380c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field*>(), { ::i2c::class_of<::UnityEngine::UIElements::Vector3Field*>(), 154 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector3Field::*)()>(&::UnityEngine::UIElements::Vector3Field::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d38558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector3Field._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector3Field::*)(::StringW)>(&::UnityEngine::UIElements::Vector3Field::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6d33498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Vector3Field::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Vector3Field*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Vector3Field::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Vector3Field*>();
}
inline void UnityEngine::UIElements::Vector3Field::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::Vector3Field*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Vector3Field::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::Vector3Field*>();
}
inline void UnityEngine::UIElements::Vector3Field::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::Vector3Field*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Vector3Field::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::Vector3Field*>();
}
inline ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>>
UnityEngine::UIElements::Vector3Field::DescribeFields() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Vector3Field*>(), 154 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector3, ::UnityEngine::UIElements::FloatField*, float_t>>>(
      this, ___internal_method);
}
inline void UnityEngine::UIElements::Vector3Field::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Vector3Field::_ctor(::StringW label) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector3Field*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline ::UnityEngine::UIElements::Vector3Field* UnityEngine::UIElements::Vector3Field::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector3Field*>());
}
inline ::UnityEngine::UIElements::Vector3Field* UnityEngine::UIElements::Vector3Field::New_ctor(::StringW label) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector3Field*>(label));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector3Field::Vector3Field() {}

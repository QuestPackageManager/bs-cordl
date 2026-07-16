#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/RectIntField.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RectIntField_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__IntegerField_def.hpp"
#include "UnityEngine/UIElements/zzzz__RectIntField_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RectIntField_UxmlFactory::*)()>(&::UnityEngine::UIElements::RectIntField_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d373c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RectIntField_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RectIntField_UxmlFactory* UnityEngine::UIElements::RectIntField_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RectIntField_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RectIntField_UxmlFactory::RectIntField_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RectIntField_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::RectIntField_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6d37428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField_UxmlTraits*>(), { ::i2c::class_of<::UnityEngine::UIElements::RectIntField_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RectIntField_UxmlTraits::*)()>(&::UnityEngine::UIElements::RectIntField_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6d37634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::RectIntField_UxmlTraits::__cordl_internal_get_m_XValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XValue;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& UnityEngine::UIElements::RectIntField_UxmlTraits::__cordl_internal_get_m_XValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XValue;
}
constexpr void UnityEngine::UIElements::RectIntField_UxmlTraits::__cordl_internal_set_m_XValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::RectIntField_UxmlTraits::__cordl_internal_get_m_YValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YValue;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& UnityEngine::UIElements::RectIntField_UxmlTraits::__cordl_internal_get_m_YValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YValue;
}
constexpr void UnityEngine::UIElements::RectIntField_UxmlTraits::__cordl_internal_set_m_YValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_YValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::RectIntField_UxmlTraits::__cordl_internal_get_m_WValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WValue;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& UnityEngine::UIElements::RectIntField_UxmlTraits::__cordl_internal_get_m_WValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WValue;
}
constexpr void UnityEngine::UIElements::RectIntField_UxmlTraits::__cordl_internal_set_m_WValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::RectIntField_UxmlTraits::__cordl_internal_get_m_HValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HValue;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& UnityEngine::UIElements::RectIntField_UxmlTraits::__cordl_internal_get_m_HValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HValue;
}
constexpr void UnityEngine::UIElements::RectIntField_UxmlTraits::__cordl_internal_set_m_HValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HValue = value;
}
inline void UnityEngine::UIElements::RectIntField_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                   ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RectIntField_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::RectIntField_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RectIntField_UxmlTraits* UnityEngine::UIElements::RectIntField_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RectIntField_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RectIntField_UxmlTraits::RectIntField_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RectIntField___c::*)()>(&::UnityEngine::UIElements::RectIntField___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d377e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::RectIntField___c::*)(::UnityEngine::RectInt)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d377e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(), { "<DescribeFields>b__0_0", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RectIntField___c::*)(::by_ref<::UnityEngine::RectInt>, int32_t)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d377ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(),
                                                             { "<DescribeFields>b__0_1", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::RectIntField___c::*)(::UnityEngine::RectInt)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d377f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(), { "<DescribeFields>b__0_2", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RectIntField___c::*)(::by_ref<::UnityEngine::RectInt>, int32_t)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d377fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(),
                                                             { "<DescribeFields>b__0_3", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::RectIntField___c::*)(::UnityEngine::RectInt)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d37804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(), { "<DescribeFields>b__0_4", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RectIntField___c::*)(::by_ref<::UnityEngine::RectInt>, int32_t)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3780c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(),
                                                             { "<DescribeFields>b__0_5", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::RectIntField___c::*)(::UnityEngine::RectInt)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d37814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(), { "<DescribeFields>b__0_6", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RectIntField___c::*)(::by_ref<::UnityEngine::RectInt>, int32_t)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_7)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3781c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(),
                                                             { "<DescribeFields>b__0_7", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9(::UnityEngine::UIElements::RectIntField___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::RectIntField___c*, "<>9", ::UnityEngine::UIElements::RectIntField___c*>(
      std::forward<::UnityEngine::UIElements::RectIntField___c*>(value));
}
inline ::UnityEngine::UIElements::RectIntField___c* UnityEngine::UIElements::RectIntField___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::RectIntField___c*, "<>9", ::UnityEngine::UIElements::RectIntField___c*>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::RectInt, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_0", ::UnityEngine::UIElements::RectIntField___c*>(
      std::forward<::System::Func_2<::UnityEngine::RectInt, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_0", ::UnityEngine::UIElements::RectIntField___c*>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_1(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                    "<>9__0_1", ::UnityEngine::UIElements::RectIntField___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*
UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                           "<>9__0_1", ::UnityEngine::UIElements::RectIntField___c*>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_2(::System::Func_2<::UnityEngine::RectInt, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_2", ::UnityEngine::UIElements::RectIntField___c*>(
      std::forward<::System::Func_2<::UnityEngine::RectInt, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_2", ::UnityEngine::UIElements::RectIntField___c*>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_3(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                    "<>9__0_3", ::UnityEngine::UIElements::RectIntField___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*
UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_3() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                           "<>9__0_3", ::UnityEngine::UIElements::RectIntField___c*>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_4(::System::Func_2<::UnityEngine::RectInt, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_4", ::UnityEngine::UIElements::RectIntField___c*>(
      std::forward<::System::Func_2<::UnityEngine::RectInt, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_4", ::UnityEngine::UIElements::RectIntField___c*>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_5(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                    "<>9__0_5", ::UnityEngine::UIElements::RectIntField___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*
UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_5() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                           "<>9__0_5", ::UnityEngine::UIElements::RectIntField___c*>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_6(::System::Func_2<::UnityEngine::RectInt, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_6", ::UnityEngine::UIElements::RectIntField___c*>(
      std::forward<::System::Func_2<::UnityEngine::RectInt, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_6() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_6", ::UnityEngine::UIElements::RectIntField___c*>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_7(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                    "<>9__0_7", ::UnityEngine::UIElements::RectIntField___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*
UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_7() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                           "<>9__0_7", ::UnityEngine::UIElements::RectIntField___c*>();
}
inline void UnityEngine::UIElements::RectIntField___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_0(::UnityEngine::RectInt r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(), { "<DescribeFields>b__0_0", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_1(::by_ref<::UnityEngine::RectInt> r, int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(),
                                                           { "<DescribeFields>b__0_1", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline int32_t UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_2(::UnityEngine::RectInt r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(), { "<DescribeFields>b__0_2", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_3(::by_ref<::UnityEngine::RectInt> r, int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(),
                                                           { "<DescribeFields>b__0_3", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline int32_t UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_4(::UnityEngine::RectInt r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(), { "<DescribeFields>b__0_4", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_5(::by_ref<::UnityEngine::RectInt> r, int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(),
                                                           { "<DescribeFields>b__0_5", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline int32_t UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_6(::UnityEngine::RectInt r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(), { "<DescribeFields>b__0_6", {}, { ::i2c::type_of<::UnityEngine::RectInt>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_7(::by_ref<::UnityEngine::RectInt> r, int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField___c*>(),
                                                           { "<DescribeFields>b__0_7", {}, { ::i2c::type_of<::by_ref<::UnityEngine::RectInt>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline ::UnityEngine::UIElements::RectIntField___c* UnityEngine::UIElements::RectIntField___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RectIntField___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RectIntField___c::RectIntField___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField.DescribeFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>> (
        ::UnityEngine::UIElements::RectIntField::*)()>(&::UnityEngine::UIElements::RectIntField::DescribeFields)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x6d36bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField*>(), { ::i2c::class_of<::UnityEngine::UIElements::RectIntField*>(), 154 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RectIntField::*)()>(&::UnityEngine::UIElements::RectIntField::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d37198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::RectIntField::*)(::StringW)>(&::UnityEngine::UIElements::RectIntField::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6d371a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RectIntField::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::RectIntField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RectIntField::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::RectIntField*>();
}
inline void UnityEngine::UIElements::RectIntField::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::RectIntField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RectIntField::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::RectIntField*>();
}
inline void UnityEngine::UIElements::RectIntField::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::RectIntField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RectIntField::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::RectIntField*>();
}
inline ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>>
UnityEngine::UIElements::RectIntField::DescribeFields() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::RectIntField*>(), 154 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>>>(
      this, ___internal_method);
}
inline void UnityEngine::UIElements::RectIntField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RectIntField::_ctor(::StringW label) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::RectIntField*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline ::UnityEngine::UIElements::RectIntField* UnityEngine::UIElements::RectIntField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RectIntField*>());
}
inline ::UnityEngine::UIElements::RectIntField* UnityEngine::UIElements::RectIntField::New_ctor(::StringW label) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::RectIntField*>(label));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RectIntField::RectIntField() {}

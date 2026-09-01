#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Vector2IntField.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Vector2IntField_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseCompositeField_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__IntegerField_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIntAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vector2IntField_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Vector2IntField_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector2IntField_UxmlFactory::*)()>(&::UnityEngine::UIElements::Vector2IntField_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d3d138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Vector2IntField_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Vector2IntField_UxmlFactory* UnityEngine::UIElements::Vector2IntField_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector2IntField_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector2IntField_UxmlFactory::Vector2IntField_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Vector2IntField_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector2IntField_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::Vector2IntField_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6d3d1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField_UxmlTraits*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::Vector2IntField_UxmlTraits*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector2IntField_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector2IntField_UxmlTraits::*)()>(&::UnityEngine::UIElements::Vector2IntField_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6d3d324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::Vector2IntField_UxmlTraits::__cordl_internal_get_m_XValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XValue;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& UnityEngine::UIElements::Vector2IntField_UxmlTraits::__cordl_internal_get_m_XValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XValue;
}
constexpr void UnityEngine::UIElements::Vector2IntField_UxmlTraits::__cordl_internal_set_m_XValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XValue = value;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& UnityEngine::UIElements::Vector2IntField_UxmlTraits::__cordl_internal_get_m_YValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YValue;
}
constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& UnityEngine::UIElements::Vector2IntField_UxmlTraits::__cordl_internal_get_m_YValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YValue;
}
constexpr void UnityEngine::UIElements::Vector2IntField_UxmlTraits::__cordl_internal_set_m_YValue(::UnityEngine::UIElements::UxmlIntAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_YValue = value;
}
inline void UnityEngine::UIElements::Vector2IntField_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                      ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Vector2IntField_UxmlTraits*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::Vector2IntField_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Vector2IntField_UxmlTraits* UnityEngine::UIElements::Vector2IntField_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector2IntField_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector2IntField_UxmlTraits::Vector2IntField_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Vector2IntField___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector2IntField___c::*)()>(&::UnityEngine::UIElements::Vector2IntField___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d3d458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector2IntField___c._DescribeFields_b__0_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::Vector2IntField___c::*)(::UnityEngine::Vector2Int)>(
    &::UnityEngine::UIElements::Vector2IntField___c::_DescribeFields_b__0_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3d45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField___c*>(), { "<DescribeFields>b__0_0", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector2IntField___c._DescribeFields_b__0_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector2IntField___c::*)(::by_ref<::UnityEngine::Vector2Int>, int32_t)>(
    &::UnityEngine::UIElements::Vector2IntField___c::_DescribeFields_b__0_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3d464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField___c*>(),
                                                             { "<DescribeFields>b__0_1", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector2IntField___c._DescribeFields_b__0_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::Vector2IntField___c::*)(::UnityEngine::Vector2Int)>(
    &::UnityEngine::UIElements::Vector2IntField___c::_DescribeFields_b__0_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3d46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField___c*>(), { "<DescribeFields>b__0_2", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector2IntField___c._DescribeFields_b__0_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector2IntField___c::*)(::by_ref<::UnityEngine::Vector2Int>, int32_t)>(
    &::UnityEngine::UIElements::Vector2IntField___c::_DescribeFields_b__0_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3d474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField___c*>(),
                                                             { "<DescribeFields>b__0_3", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Vector2IntField___c::setStaticF___9(::UnityEngine::UIElements::Vector2IntField___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Vector2IntField___c*, "<>9", ::UnityEngine::UIElements::Vector2IntField___c*>(
      std::forward<::UnityEngine::UIElements::Vector2IntField___c*>(value));
}
inline ::UnityEngine::UIElements::Vector2IntField___c* UnityEngine::UIElements::Vector2IntField___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Vector2IntField___c*, "<>9", ::UnityEngine::UIElements::Vector2IntField___c*>();
}
inline void UnityEngine::UIElements::Vector2IntField___c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::Vector2Int, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector2Int, int32_t>*, "<>9__0_0", ::UnityEngine::UIElements::Vector2IntField___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector2Int, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector2Int, int32_t>* UnityEngine::UIElements::Vector2IntField___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector2Int, int32_t>*, "<>9__0_0", ::UnityEngine::UIElements::Vector2IntField___c*>();
}
inline void UnityEngine::UIElements::Vector2IntField___c::setStaticF___9__0_1(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                    "<>9__0_1", ::UnityEngine::UIElements::Vector2IntField___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>*
UnityEngine::UIElements::Vector2IntField___c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>*, "<>9__0_1",
      ::UnityEngine::UIElements::Vector2IntField___c*>();
}
inline void UnityEngine::UIElements::Vector2IntField___c::setStaticF___9__0_2(::System::Func_2<::UnityEngine::Vector2Int, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector2Int, int32_t>*, "<>9__0_2", ::UnityEngine::UIElements::Vector2IntField___c*>(
      std::forward<::System::Func_2<::UnityEngine::Vector2Int, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector2Int, int32_t>* UnityEngine::UIElements::Vector2IntField___c::getStaticF___9__0_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector2Int, int32_t>*, "<>9__0_2", ::UnityEngine::UIElements::Vector2IntField___c*>();
}
inline void UnityEngine::UIElements::Vector2IntField___c::setStaticF___9__0_3(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                    "<>9__0_3", ::UnityEngine::UIElements::Vector2IntField___c*>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>*
UnityEngine::UIElements::Vector2IntField___c::getStaticF___9__0_3() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>*, "<>9__0_3",
      ::UnityEngine::UIElements::Vector2IntField___c*>();
}
inline void UnityEngine::UIElements::Vector2IntField___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::Vector2IntField___c::_DescribeFields_b__0_0(::UnityEngine::Vector2Int r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField___c*>(), { "<DescribeFields>b__0_0", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::Vector2IntField___c::_DescribeFields_b__0_1(::by_ref<::UnityEngine::Vector2Int> r, int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField___c*>(),
                                                           { "<DescribeFields>b__0_1", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline int32_t UnityEngine::UIElements::Vector2IntField___c::_DescribeFields_b__0_2(::UnityEngine::Vector2Int r) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField___c*>(), { "<DescribeFields>b__0_2", {}, { ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::Vector2IntField___c::_DescribeFields_b__0_3(::by_ref<::UnityEngine::Vector2Int> r, int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField___c*>(),
                                                           { "<DescribeFields>b__0_3", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2Int>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, v);
}
inline ::UnityEngine::UIElements::Vector2IntField___c* UnityEngine::UIElements::Vector2IntField___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector2IntField___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector2IntField___c::Vector2IntField___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Vector2IntField.DescribeFields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>> (
        ::UnityEngine::UIElements::Vector2IntField::*)()>(&::UnityEngine::UIElements::Vector2IntField::DescribeFields)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x6d3cbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField*>(), { ::i2c::class_of<::UnityEngine::UIElements::Vector2IntField*>(), 154 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector2IntField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector2IntField::*)()>(&::UnityEngine::UIElements::Vector2IntField::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d3cf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector2IntField._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Vector2IntField::*)(::StringW)>(&::UnityEngine::UIElements::Vector2IntField::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6d3cf30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Vector2IntField::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Vector2IntField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Vector2IntField::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Vector2IntField*>();
}
inline void UnityEngine::UIElements::Vector2IntField::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::Vector2IntField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Vector2IntField::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::UnityEngine::UIElements::Vector2IntField*>();
}
inline void UnityEngine::UIElements::Vector2IntField::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::Vector2IntField*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Vector2IntField::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::UnityEngine::UIElements::Vector2IntField*>();
}
inline ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>>
UnityEngine::UIElements::Vector2IntField::DescribeFields() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Vector2IntField*>(), 154 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::Vector2Int, ::UnityEngine::UIElements::IntegerField*, int32_t>>>(
      this, ___internal_method);
}
inline void UnityEngine::UIElements::Vector2IntField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Vector2IntField::_ctor(::StringW label) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Vector2IntField*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline ::UnityEngine::UIElements::Vector2IntField* UnityEngine::UIElements::Vector2IntField::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector2IntField*>());
}
inline ::UnityEngine::UIElements::Vector2IntField* UnityEngine::UIElements::Vector2IntField::New_ctor(::StringW label) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Vector2IntField*>(label));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector2IntField::Vector2IntField() {}

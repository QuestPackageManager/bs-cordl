#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Vector4Field.hpp"
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
//  Writing Method size for method: ::UnityEngine::UIElements::__Vector4Field__UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__Vector4Field__UxmlFactory::*)()>(
    &::UnityEngine::UIElements::__Vector4Field__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x49159f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field__UxmlFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__Vector4Field__UxmlFactory* UnityEngine::UIElements::__Vector4Field__UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__Vector4Field__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__Vector4Field__UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field__UxmlFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__Vector4Field__UxmlFactory::__Vector4Field__UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__Vector4Field__UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__Vector4Field__UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(
    &::UnityEngine::UIElements::__Vector4Field__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x4915a38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field__UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field__UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__Vector4Field__UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__Vector4Field__UxmlTraits::*)()>(
    &::UnityEngine::UIElements::__Vector4Field__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4915c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field__UxmlTraits*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::__Vector4Field__UxmlTraits::__cordl_internal_get_m_XValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const&
UnityEngine::UIElements::__Vector4Field__UxmlTraits::__cordl_internal_get_m_XValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XValue;
}
constexpr void UnityEngine::UIElements::__Vector4Field__UxmlTraits::__cordl_internal_set_m_XValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_XValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::__Vector4Field__UxmlTraits::__cordl_internal_get_m_YValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const&
UnityEngine::UIElements::__Vector4Field__UxmlTraits::__cordl_internal_get_m_YValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_YValue;
}
constexpr void UnityEngine::UIElements::__Vector4Field__UxmlTraits::__cordl_internal_set_m_YValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_YValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::__Vector4Field__UxmlTraits::__cordl_internal_get_m_ZValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const&
UnityEngine::UIElements::__Vector4Field__UxmlTraits::__cordl_internal_get_m_ZValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZValue;
}
constexpr void UnityEngine::UIElements::__Vector4Field__UxmlTraits::__cordl_internal_set_m_ZValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ZValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& UnityEngine::UIElements::__Vector4Field__UxmlTraits::__cordl_internal_get_m_WValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WValue;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const&
UnityEngine::UIElements::__Vector4Field__UxmlTraits::__cordl_internal_get_m_WValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WValue;
}
constexpr void UnityEngine::UIElements::__Vector4Field__UxmlTraits::__cordl_internal_set_m_WValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::__Vector4Field__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                      ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field__UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__Vector4Field__UxmlTraits* UnityEngine::UIElements::__Vector4Field__UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__Vector4Field__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__Vector4Field__UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field__UxmlTraits*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__Vector4Field__UxmlTraits::__Vector4Field__UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__Vector4Field____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__Vector4Field____c::*)()>(&::UnityEngine::UIElements::__Vector4Field____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4915db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__Vector4Field____c._DescribeFields_b__0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__Vector4Field____c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4915db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__Vector4Field____c._DescribeFields_b__0_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__Vector4Field____c::*)(ByRef<::UnityEngine::Vector4>, float_t)>(
    &::UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4915dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__Vector4Field____c._DescribeFields_b__0_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__Vector4Field____c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4915dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__Vector4Field____c._DescribeFields_b__0_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__Vector4Field____c::*)(ByRef<::UnityEngine::Vector4>, float_t)>(
    &::UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4915dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__Vector4Field____c._DescribeFields_b__0_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__Vector4Field____c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4915dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_4", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__Vector4Field____c._DescribeFields_b__0_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__Vector4Field____c::*)(ByRef<::UnityEngine::Vector4>, float_t)>(
    &::UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4915ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_5", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__Vector4Field____c._DescribeFields_b__0_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__Vector4Field____c::*)(::UnityEngine::Vector4)>(
    &::UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4915de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_6", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__Vector4Field____c._DescribeFields_b__0_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__Vector4Field____c::*)(ByRef<::UnityEngine::Vector4>, float_t)>(
    &::UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_7)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4915dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_7", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__Vector4Field____c::setStaticF___9(::UnityEngine::UIElements::__Vector4Field____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::__Vector4Field____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>(
      std::forward<::UnityEngine::UIElements::__Vector4Field____c*>(value));
}
inline ::UnityEngine::UIElements::__Vector4Field____c* UnityEngine::UIElements::__Vector4Field____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__Vector4Field____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>();
}
inline void UnityEngine::UIElements::__Vector4Field____c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::Vector4, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, float_t>* UnityEngine::UIElements::__Vector4Field____c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>();
}
inline void UnityEngine::UIElements::__Vector4Field____c::setStaticF___9__0_1(
    ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*, "<>9__0_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>(
      std::forward<::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*>(value));
}
inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*
UnityEngine::UIElements::__Vector4Field____c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                           "<>9__0_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>();
}
inline void UnityEngine::UIElements::__Vector4Field____c::setStaticF___9__0_2(::System::Func_2<::UnityEngine::Vector4, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, float_t>* UnityEngine::UIElements::__Vector4Field____c::getStaticF___9__0_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>();
}
inline void UnityEngine::UIElements::__Vector4Field____c::setStaticF___9__0_3(
    ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*, "<>9__0_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>(
      std::forward<::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*>(value));
}
inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*
UnityEngine::UIElements::__Vector4Field____c::getStaticF___9__0_3() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                           "<>9__0_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>();
}
inline void UnityEngine::UIElements::__Vector4Field____c::setStaticF___9__0_4(::System::Func_2<::UnityEngine::Vector4, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, float_t>* UnityEngine::UIElements::__Vector4Field____c::getStaticF___9__0_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>();
}
inline void UnityEngine::UIElements::__Vector4Field____c::setStaticF___9__0_5(
    ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*, "<>9__0_5",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>(
      std::forward<::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*>(value));
}
inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*
UnityEngine::UIElements::__Vector4Field____c::getStaticF___9__0_5() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                           "<>9__0_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>();
}
inline void UnityEngine::UIElements::__Vector4Field____c::setStaticF___9__0_6(::System::Func_2<::UnityEngine::Vector4, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_6",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Vector4, float_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector4, float_t>* UnityEngine::UIElements::__Vector4Field____c::getStaticF___9__0_6() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector4, float_t>*, "<>9__0_6",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>();
}
inline void UnityEngine::UIElements::__Vector4Field____c::setStaticF___9__0_7(
    ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*, "<>9__0_7",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>(
      std::forward<::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*>(value));
}
inline ::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*
UnityEngine::UIElements::__Vector4Field____c::getStaticF___9__0_7() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__BaseCompositeField_3__FieldDescription__WriteDelegate<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>*,
                                           "<>9__0_7", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get>();
}
inline ::UnityEngine::UIElements::__Vector4Field____c* UnityEngine::UIElements::__Vector4Field____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__Vector4Field____c*>());
}
inline void UnityEngine::UIElements::__Vector4Field____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_0(::UnityEngine::Vector4 r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_1(ByRef<::UnityEngine::Vector4> r, float_t v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r, v);
}
inline float_t UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_2(::UnityEngine::Vector4 r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_3(ByRef<::UnityEngine::Vector4> r, float_t v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r, v);
}
inline float_t UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_4(::UnityEngine::Vector4 r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_4", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_5(ByRef<::UnityEngine::Vector4> r, float_t v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_5", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r, v);
}
inline float_t UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_6(::UnityEngine::Vector4 r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_6", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::__Vector4Field____c::_DescribeFields_b__0_7(ByRef<::UnityEngine::Vector4> r, float_t v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__Vector4Field____c*>::get(), "<DescribeFields>b__0_7", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r, v);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__Vector4Field____c::__Vector4Field____c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field.DescribeFields
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>,
                         ::Array<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>>*> (
        ::UnityEngine::UIElements::Vector4Field::*)()>(&::UnityEngine::UIElements::Vector4Field::DescribeFields)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x49151a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get(), 118));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Vector4Field::*)()>(&::UnityEngine::UIElements::Vector4Field::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49157f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Vector4Field._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Vector4Field::*)(::StringW)>(&::UnityEngine::UIElements::Vector4Field::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x4915800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Vector4Field::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Vector4Field::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get>();
}
inline void UnityEngine::UIElements::Vector4Field::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Vector4Field::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get>();
}
inline void UnityEngine::UIElements::Vector4Field::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Vector4Field::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get>();
}
inline ::ArrayW<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>,
                ::Array<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>>*>
UnityEngine::UIElements::Vector4Field::DescribeFields() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get(), 118)));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>,
               ::Array<::UnityEngine::UIElements::__BaseCompositeField_3__FieldDescription<::UnityEngine::Vector4, ::UnityEngine::UIElements::FloatField*, float_t>>*>,
      false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Vector4Field* UnityEngine::UIElements::Vector4Field::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Vector4Field*>());
}
inline void UnityEngine::UIElements::Vector4Field::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Vector4Field* UnityEngine::UIElements::Vector4Field::New_ctor(::StringW label) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Vector4Field*>(label));
}
inline void UnityEngine::UIElements::Vector4Field::_ctor(::StringW label) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Vector4Field*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Vector4Field::Vector4Field() {}

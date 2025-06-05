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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RectIntField_UxmlFactory::*)()>(
    &::UnityEngine::UIElements::RectIntField_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x498f550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField_UxmlFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RectIntField_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField_UxmlFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RectIntField_UxmlFactory* UnityEngine::UIElements::RectIntField_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::RectIntField_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RectIntField_UxmlFactory::RectIntField_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RectIntField_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::RectIntField_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x498f598;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField_UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField_UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RectIntField_UxmlTraits::*)()>(
    &::UnityEngine::UIElements::RectIntField_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x498f76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField_UxmlTraits*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_XValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_YValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::RectIntField_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                   ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField_UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::RectIntField_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField_UxmlTraits*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RectIntField_UxmlTraits* UnityEngine::UIElements::RectIntField_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::RectIntField_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RectIntField_UxmlTraits::RectIntField_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RectIntField___c::*)()>(&::UnityEngine::UIElements::RectIntField___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498f908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::RectIntField___c::*)(::UnityEngine::RectInt)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498f910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RectIntField___c::*)(::ByRef<::UnityEngine::RectInt>, int32_t)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498f918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::RectIntField___c::*)(::UnityEngine::RectInt)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498f920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RectIntField___c::*)(::ByRef<::UnityEngine::RectInt>, int32_t)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498f928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::RectIntField___c::*)(::UnityEngine::RectInt)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498f930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_4", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RectIntField___c::*)(::ByRef<::UnityEngine::RectInt>, int32_t)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498f938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_5", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::RectIntField___c::*)(::UnityEngine::RectInt)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498f940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_6", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField___c._DescribeFields_b__0_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RectIntField___c::*)(::ByRef<::UnityEngine::RectInt>, int32_t)>(
    &::UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_7)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498f948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_7", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9(::UnityEngine::UIElements::RectIntField___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::RectIntField___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>(
      std::forward<::UnityEngine::UIElements::RectIntField___c*>(value));
}
inline ::UnityEngine::UIElements::RectIntField___c* UnityEngine::UIElements::RectIntField___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::RectIntField___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::RectInt, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::RectInt, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_1(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                    "<>9__0_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*
UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                           "<>9__0_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_2(::System::Func_2<::UnityEngine::RectInt, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::RectInt, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_3(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                    "<>9__0_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*
UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_3() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                           "<>9__0_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_4(::System::Func_2<::UnityEngine::RectInt, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::RectInt, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_5(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                    "<>9__0_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*
UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_5() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                           "<>9__0_5", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_6(::System::Func_2<::UnityEngine::RectInt, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_6",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::RectInt, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::RectInt, int32_t>* UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_6() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::RectInt, int32_t>*, "<>9__0_6",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>();
}
inline void UnityEngine::UIElements::RectIntField___c::setStaticF___9__0_7(
    ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                    "<>9__0_7", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>(
      std::forward<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*>(value));
}
inline ::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*
UnityEngine::UIElements::RectIntField___c::getStaticF___9__0_7() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::FieldDescription_BaseCompositeField_3_WriteDelegate<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>*,
                                           "<>9__0_7", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get>();
}
inline void UnityEngine::UIElements::RectIntField___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_0(::UnityEngine::RectInt r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_1(::ByRef<::UnityEngine::RectInt> r, int32_t v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r, v);
}
inline int32_t UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_2(::UnityEngine::RectInt r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_3(::ByRef<::UnityEngine::RectInt> r, int32_t v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r, v);
}
inline int32_t UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_4(::UnityEngine::RectInt r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_4", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_5(::ByRef<::UnityEngine::RectInt> r, int32_t v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_5", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r, v);
}
inline int32_t UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_6(::UnityEngine::RectInt r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_6", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, r);
}
inline void UnityEngine::UIElements::RectIntField___c::_DescribeFields_b__0_7(::ByRef<::UnityEngine::RectInt> r, int32_t v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField___c*>::get(), "<DescribeFields>b__0_7", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::RectInt>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r, v);
}
inline ::UnityEngine::UIElements::RectIntField___c* UnityEngine::UIElements::RectIntField___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::RectIntField___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RectIntField___c::RectIntField___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField.DescribeFields
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>,
                         ::Array<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>>*> (
        ::UnityEngine::UIElements::RectIntField::*)()>(&::UnityEngine::UIElements::RectIntField::DescribeFields)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x498ece8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get(), 118));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RectIntField::*)()>(&::UnityEngine::UIElements::RectIntField::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x498f340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::RectIntField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::RectIntField::*)(::StringW)>(&::UnityEngine::UIElements::RectIntField::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x498f348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::RectIntField::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RectIntField::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get>();
}
inline void UnityEngine::UIElements::RectIntField::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RectIntField::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get>();
}
inline void UnityEngine::UIElements::RectIntField::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::RectIntField::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get>();
}
inline ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>,
                ::Array<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>>*>
UnityEngine::UIElements::RectIntField::DescribeFields() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get(), 118)));
  return ::cordl_internals::RunMethodRethrow<
      ::ArrayW<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>,
               ::Array<::UnityEngine::UIElements::BaseCompositeField_3_FieldDescription<::UnityEngine::RectInt, ::UnityEngine::UIElements::IntegerField*, int32_t>>*>,
      false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RectIntField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::RectIntField::_ctor(::StringW label) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::RectIntField*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
inline ::UnityEngine::UIElements::RectIntField* UnityEngine::UIElements::RectIntField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::RectIntField*>());
}
inline ::UnityEngine::UIElements::RectIntField* UnityEngine::UIElements::RectIntField::New_ctor(::StringW label) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::RectIntField*>(label));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::RectIntField::RectIntField() {}

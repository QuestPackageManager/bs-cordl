#pragma once
// IWYU pragma private; include "Unity\Properties\PropertyContainer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__PathVisitor_impl.hpp"
#include "Unity/Properties/zzzz__PropertyContainer_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IProperty_def.hpp"
#include "Unity/Properties/zzzz__PropertyContainer_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "Unity/Properties/zzzz__VisitParameters_def.hpp"
#include "Unity/Properties/zzzz__VisitReturnCode_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
//  Writing Method size for method: ::Unity::Properties::GetPropertyVisitor_PropertyContainer___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::GetPropertyVisitor_PropertyContainer___c::*)()>(
    &::Unity::Properties::GetPropertyVisitor_PropertyContainer___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b9e478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::GetPropertyVisitor_PropertyContainer___c.__cctor_b__5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyContainer_GetPropertyVisitor* (::Unity::Properties::GetPropertyVisitor_PropertyContainer___c::*)()>(
    &::Unity::Properties::GetPropertyVisitor_PropertyContainer___c::__cctor_b__5_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b9e47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*>(), { "<.cctor>b__5_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::GetPropertyVisitor_PropertyContainer___c.__cctor_b__5_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::GetPropertyVisitor_PropertyContainer___c::*)(::Unity::Properties::PropertyContainer_GetPropertyVisitor*)>(
    &::Unity::Properties::GetPropertyVisitor_PropertyContainer___c::__cctor_b__5_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b9e4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*>(),
                                                             { "<.cctor>b__5_1", {}, { ::i2c::type_of<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>() } })));
    return ___internal_method;
  }
};
inline void Unity::Properties::GetPropertyVisitor_PropertyContainer___c::setStaticF___9(::Unity::Properties::GetPropertyVisitor_PropertyContainer___c* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*, "<>9", ::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*>(
      std::forward<::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*>(value));
}
inline ::Unity::Properties::GetPropertyVisitor_PropertyContainer___c* Unity::Properties::GetPropertyVisitor_PropertyContainer___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*, "<>9", ::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*>();
}
inline void Unity::Properties::GetPropertyVisitor_PropertyContainer___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::PropertyContainer_GetPropertyVisitor* Unity::Properties::GetPropertyVisitor_PropertyContainer___c::__cctor_b__5_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*>(), { "<.cctor>b__5_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>(this, ___internal_method);
}
inline void Unity::Properties::GetPropertyVisitor_PropertyContainer___c::__cctor_b__5_1(::Unity::Properties::PropertyContainer_GetPropertyVisitor* v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*>(),
                                                                                         { "<.cctor>b__5_1", {}, { ::i2c::type_of<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline ::Unity::Properties::GetPropertyVisitor_PropertyContainer___c* Unity::Properties::GetPropertyVisitor_PropertyContainer___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::GetPropertyVisitor_PropertyContainer___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::GetPropertyVisitor_PropertyContainer___c::GetPropertyVisitor_PropertyContainer___c() {}
//  Writing Method size for method: ::Unity::Properties::PropertyContainer_GetPropertyVisitor.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::PropertyContainer_GetPropertyVisitor::*)()>(&::Unity::Properties::PropertyContainer_GetPropertyVisitor::Reset)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6b9e22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>(),
                                                                                          { ::i2c::class_of<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Properties::PropertyContainer_GetPropertyVisitor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Properties::PropertyContainer_GetPropertyVisitor::*)()>(&::Unity::Properties::PropertyContainer_GetPropertyVisitor::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b9e28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Unity::Properties::IProperty*& Unity::Properties::PropertyContainer_GetPropertyVisitor::__cordl_internal_get_Property() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Property;
}
constexpr ::Unity::Properties::IProperty* const& Unity::Properties::PropertyContainer_GetPropertyVisitor::__cordl_internal_get_Property() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Property;
}
constexpr void Unity::Properties::PropertyContainer_GetPropertyVisitor::__cordl_internal_set_Property(::Unity::Properties::IProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Property = value;
}
inline void Unity::Properties::PropertyContainer_GetPropertyVisitor::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>*, "Pool", ::Unity::Properties::PropertyContainer_GetPropertyVisitor*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>* Unity::Properties::PropertyContainer_GetPropertyVisitor::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>*, "Pool",
                                           ::Unity::Properties::PropertyContainer_GetPropertyVisitor*>();
}
inline void Unity::Properties::PropertyContainer_GetPropertyVisitor::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContainer, typename TValue>
inline void Unity::Properties::PropertyContainer_GetPropertyVisitor::VisitPath(::Unity::Properties::Property_2<TContainer, TValue>* property, ::by_ref<TContainer> container, ::by_ref<TValue> value) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>(), 7 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, container, value);
}
inline void Unity::Properties::PropertyContainer_GetPropertyVisitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Properties::PropertyContainer_GetPropertyVisitor* Unity::Properties::PropertyContainer_GetPropertyVisitor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::PropertyContainer_GetPropertyVisitor*>());
}
// Ctor Parameters []
constexpr ::Unity::Properties::PropertyContainer_GetPropertyVisitor::PropertyContainer_GetPropertyVisitor() {}
template <typename TSrcValue>
inline void Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>::setStaticF___9(::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>*, "<>9", ::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>*>(
      std::forward<::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>*>(value));
}
template <typename TSrcValue> inline ::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>* Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>*, "<>9", ::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>*>();
}
template <typename TSrcValue> inline void Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSrcValue> inline ::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>* Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>::__cctor_b__5_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>*>(), { "<.cctor>b__5_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>(this, ___internal_method);
}
template <typename TSrcValue>
inline void Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>::__cctor_b__5_1(::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>* v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>*>(),
                                                           { "<.cctor>b__5_1", {}, { ::i2c::type_of<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
template <typename TSrcValue> inline ::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>* Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>*>());
}
// Ctor Parameters []
template <typename TSrcValue> constexpr ::Unity::Properties::GetValueVisitor_1_PropertyContainer___c<TSrcValue>::GetValueVisitor_1_PropertyContainer___c() {}
template <typename TSrcValue> constexpr TSrcValue& Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename TSrcValue> constexpr TSrcValue const& Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename TSrcValue> constexpr void Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>::__cordl_internal_set_Value(TSrcValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Value = value;
}
template <typename TSrcValue>
inline void
Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>*, "Pool",
                                    ::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>*>(value));
}
template <typename TSrcValue>
inline ::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>* Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>*, "Pool",
                                           ::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>();
}
template <typename TSrcValue> inline void Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>::Reset() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSrcValue>
template <typename TContainer, typename TValue>
inline void Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>::VisitPath(::Unity::Properties::Property_2<TContainer, TValue>* property, ::by_ref<TContainer> container,
                                                                                         ::by_ref<TValue> value) {
  auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>(), 7 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, container, value);
}
template <typename TSrcValue> inline void Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSrcValue> inline ::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>* Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>*>());
}
// Ctor Parameters []
template <typename TSrcValue> constexpr ::Unity::Properties::PropertyContainer_GetValueVisitor_1<TSrcValue>::PropertyContainer_GetValueVisitor_1() {}
template <typename TContainer>
inline void Unity::Properties::PropertyContainer::Accept(::Unity::Properties::IPropertyBagVisitor* visitor, ::by_ref<TContainer> container, ::Unity::Properties::VisitParameters parameters) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyContainer*>(),
                          { "Accept",
                            { ::i2c::class_of<TContainer>() },
                            { ::i2c::type_of<::Unity::Properties::IPropertyBagVisitor*>(), ::i2c::type_of<::by_ref<TContainer>>(), ::i2c::type_of<::Unity::Properties::VisitParameters>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, visitor, container, parameters);
}
template <typename TContainer>
inline bool Unity::Properties::PropertyContainer::TryAccept(::Unity::Properties::IPropertyBagVisitor* visitor, ::by_ref<TContainer> container, ::Unity::Properties::VisitParameters parameters) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyContainer*>(),
                          { "TryAccept",
                            { ::i2c::class_of<TContainer>() },
                            { ::i2c::type_of<::Unity::Properties::IPropertyBagVisitor*>(), ::i2c::type_of<::by_ref<TContainer>>(), ::i2c::type_of<::Unity::Properties::VisitParameters>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, visitor, container, parameters);
}
template <typename TContainer>
inline bool Unity::Properties::PropertyContainer::TryAccept(::Unity::Properties::IPropertyBagVisitor* visitor, ::by_ref<TContainer> container,
                                                            ::by_ref<::Unity::Properties::VisitReturnCode> returnCode, ::Unity::Properties::VisitParameters parameters) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyContainer*>(),
                                                           { "TryAccept",
                                                             { ::i2c::class_of<TContainer>() },
                                                             { ::i2c::type_of<::Unity::Properties::IPropertyBagVisitor*>(), ::i2c::type_of<::by_ref<TContainer>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Properties::VisitReturnCode>>(), ::i2c::type_of<::Unity::Properties::VisitParameters>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, visitor, container, returnCode, parameters);
}
template <typename TContainer>
inline bool Unity::Properties::PropertyContainer::TryGetProperty(::by_ref<TContainer> container, ::by_ref<::Unity::Properties::PropertyPath> path, ::by_ref<::Unity::Properties::IProperty*> property) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyContainer*>(),
                          { "TryGetProperty",
                            { ::i2c::class_of<TContainer>() },
                            { ::i2c::type_of<::by_ref<TContainer>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(), ::i2c::type_of<::by_ref<::Unity::Properties::IProperty*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, path, property);
}
template <typename TContainer>
inline bool Unity::Properties::PropertyContainer::TryGetProperty(::by_ref<TContainer> container, ::by_ref<::Unity::Properties::PropertyPath> path, ::by_ref<::Unity::Properties::IProperty*> property,
                                                                 ::by_ref<::Unity::Properties::VisitReturnCode> returnCode) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyContainer*>(),
                                                           { "TryGetProperty",
                                                             { ::i2c::class_of<TContainer>() },
                                                             { ::i2c::type_of<::by_ref<TContainer>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Properties::IProperty*>>(), ::i2c::type_of<::by_ref<::Unity::Properties::VisitReturnCode>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, path, property, returnCode);
}
template <typename TContainer, typename TValue> inline bool Unity::Properties::PropertyContainer::TryGetValue(::by_ref<TContainer> container, ::StringW name, ::by_ref<TValue> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyContainer*>(),
                                                           { "TryGetValue",
                                                             { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() },
                                                             { ::i2c::type_of<::by_ref<TContainer>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, name, value);
}
template <typename TContainer, typename TValue>
inline bool Unity::Properties::PropertyContainer::TryGetValue(::by_ref<TContainer> container, ::by_ref<::Unity::Properties::PropertyPath> path, ::by_ref<TValue> value,
                                                              ::by_ref<::Unity::Properties::VisitReturnCode> returnCode) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertyContainer*>(), { "TryGetValue",
                                                                                        { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() },
                                                                                        { ::i2c::type_of<::by_ref<TContainer>>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(),
                                                                                          ::i2c::type_of<::by_ref<TValue>>(), ::i2c::type_of<::by_ref<::Unity::Properties::VisitReturnCode>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, path, value, returnCode);
}
// Ctor Parameters []
constexpr ::Unity::Properties::PropertyContainer::PropertyContainer() {}

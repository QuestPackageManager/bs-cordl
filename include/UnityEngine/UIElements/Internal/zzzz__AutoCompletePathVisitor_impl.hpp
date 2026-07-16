#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/AutoCompletePathVisitor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__PropertyPath_impl.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__AutoCompletePathVisitor_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__IListPropertyVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBagVisitor_def.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__IPropertyVisitor_def.hpp"
#include "Unity/Properties/zzzz__IProperty_def.hpp"
#include "Unity/Properties/zzzz__ITypeVisitor_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/Internal/zzzz__AutoCompletePathVisitor_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropertyPathInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext.get_propertyPathInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>* (
    ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::*)()>(&::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::get_propertyPathInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1d2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), { "get_propertyPathInfos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext.set_propertyPathInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>*)>(&::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::set_propertyPathInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1d2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(),
                                                { "set_propertyPathInfos", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext.get_types
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::System::Type*>* (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::*)()>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::get_types)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1d2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), { "get_types", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext.get_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::*)()>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::get_current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d1d2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), { "get_current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext.set_current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::*)(::Unity::Properties::PropertyPath)>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::set_current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6d1d30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(),
                                                                                           { "set_current", {}, { ::i2c::type_of<::Unity::Properties::PropertyPath>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext.get_currentDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::*)()>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::get_currentDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1d318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), { "get_currentDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext.set_currentDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::*)(int32_t)>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::set_currentDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1d320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), { "set_currentDepth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::*)()>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d1d270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>*&
UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::__cordl_internal_get__propertyPathInfos_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyPathInfos_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>* const&
UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::__cordl_internal_get__propertyPathInfos_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyPathInfos_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::__cordl_internal_set__propertyPathInfos_k__BackingField(
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyPathInfos_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::__cordl_internal_get__types_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____types_k__BackingField;
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>* const&
UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::__cordl_internal_get__types_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____types_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::__cordl_internal_set__types_k__BackingField(::System::Collections::Generic::HashSet_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____types_k__BackingField = value;
}
constexpr ::Unity::Properties::PropertyPath& UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::__cordl_internal_get__current_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current_k__BackingField;
}
constexpr ::Unity::Properties::PropertyPath const& UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::__cordl_internal_get__current_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::__cordl_internal_set__current_k__BackingField(::Unity::Properties::PropertyPath value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::__cordl_internal_get__currentDepth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDepth_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::__cordl_internal_get__currentDepth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDepth_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::__cordl_internal_set__currentDepth_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentDepth_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>* UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::get_propertyPathInfos() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), { "get_propertyPathInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::set_propertyPathInfos(::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(),
                                              { "set_propertyPathInfos", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::PropertyPathInfo>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::HashSet_1<::System::Type*>* UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::get_types() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), { "get_types", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::System::Type*>*>(this, ___internal_method);
}
inline ::Unity::Properties::PropertyPath UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::get_current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), { "get_current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::set_current(::Unity::Properties::PropertyPath value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(),
                                                                                         { "set_current", {}, { ::i2c::type_of<::Unity::Properties::PropertyPath>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::get_currentDepth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), { "get_currentDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::set_currentDepth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), { "set_currentDepth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext::AutoCompletePathVisitor_VisitContext() {}
template <typename TContainer>
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>::_ctor(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context);
}
template <typename TContainer> inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TContainer> constexpr UnityEngine::UIElements::Internal::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TContainer> constexpr ::System::IDisposable* UnityEngine::UIElements::Internal::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_VisitContext", ty: "::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*", modifiers: "", def_value: Some("{}") }]
template <typename TContainer>
constexpr ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>::AutoCompletePathVisitor_InspectedTypeScope_1(
    ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* m_VisitContext) noexcept {
  this->m_VisitContext = m_VisitContext;
}
// Ctor Parameters []
template <typename TContainer> constexpr ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_InspectedTypeScope_1<TContainer>::AutoCompletePathVisitor_InspectedTypeScope_1() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::*)(
    ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*, ::Unity::Properties::IProperty*)>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6d1d328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), ::i2c::type_of<::Unity::Properties::IProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::*)(
    ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*, int32_t, ::System::Type*)>(&::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6d1d080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::*)()>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::Dispose)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6d1d514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::_ctor(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* context,
                                                                                                   ::Unity::Properties::IProperty* property) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), ::i2c::type_of<::Unity::Properties::IProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, property);
}
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::_ctor(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* context, int32_t index,
                                                                                                   ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, index, type);
}
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_VisitContext", ty: "::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::AutoCompletePathVisitor_VisitedPropertyScope(
    ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* m_VisitContext) noexcept {
  this->m_VisitContext = m_VisitContext;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitedPropertyScope::AutoCompletePathVisitor_VisitedPropertyScope() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor.get_maxDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor::*)()>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor::get_maxDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d1cb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(), { "get_maxDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor.HasReachedEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor::*)(::System::Type*)>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor::HasReachedEnd)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6d1cb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(), { "HasReachedEnd", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor::*)()>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor::Reset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6d1cbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor.VisitPropertyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor::*)(::System::Type*)>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor::VisitPropertyType)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x6d1cc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(), { "VisitPropertyType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Internal::AutoCompletePathVisitor::*)()>(
    &::UnityEngine::UIElements::Internal::AutoCompletePathVisitor::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6d1d218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext*& UnityEngine::UIElements::Internal::AutoCompletePathVisitor::__cordl_internal_get_m_VisitContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisitContext;
}
constexpr ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* const& UnityEngine::UIElements::Internal::AutoCompletePathVisitor::__cordl_internal_get_m_VisitContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisitContext;
}
constexpr void UnityEngine::UIElements::Internal::AutoCompletePathVisitor::__cordl_internal_set_m_VisitContext(::UnityEngine::UIElements::Internal::AutoCompletePathVisitor_VisitContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VisitContext = value;
}
constexpr int32_t& UnityEngine::UIElements::Internal::AutoCompletePathVisitor::__cordl_internal_get__maxDepth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepth_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::Internal::AutoCompletePathVisitor::__cordl_internal_get__maxDepth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepth_k__BackingField;
}
constexpr void UnityEngine::UIElements::Internal::AutoCompletePathVisitor::__cordl_internal_set__maxDepth_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxDepth_k__BackingField = value;
}
inline int32_t UnityEngine::UIElements::Internal::AutoCompletePathVisitor::get_maxDepth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(), { "get_maxDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::Internal::AutoCompletePathVisitor::HasReachedEnd(::System::Type* containerType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(), { "HasReachedEnd", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, containerType);
}
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContainer> inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor::Unity_Properties_ITypeVisitor_Visit() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(),
                                                                                              { "Unity.Properties.ITypeVisitor.Visit", { ::i2c::class_of<TContainer>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContainer>
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor::Unity_Properties_IPropertyBagVisitor_Visit(::Unity::Properties::IPropertyBag_1<TContainer>* properties,
                                                                                                                   ::by_ref<TContainer> container) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(),
                                                           { "Unity.Properties.IPropertyBagVisitor.Visit",
                                                             { ::i2c::class_of<TContainer>() },
                                                             { ::i2c::type_of<::Unity::Properties::IPropertyBag_1<TContainer>*>(), ::i2c::type_of<::by_ref<TContainer>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties, container);
}
template <typename TContainer, typename TValue>
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor::Unity_Properties_IPropertyVisitor_Visit(::Unity::Properties::Property_2<TContainer, TValue>* property,
                                                                                                                ::by_ref<TContainer> container) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(),
                                                           { "Unity.Properties.IPropertyVisitor.Visit",
                                                             { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() },
                                                             { ::i2c::type_of<::Unity::Properties::Property_2<TContainer, TValue>*>(), ::i2c::type_of<::by_ref<TContainer>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, container);
}
template <typename TContainer, typename TList, typename TElement>
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor::Unity_Properties_IListPropertyVisitor_Visit(::Unity::Properties::Property_2<TContainer, TList>* property,
                                                                                                                    ::by_ref<TContainer> container, ::by_ref<TList> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(),
                                       { "Unity.Properties.IListPropertyVisitor.Visit",
                                         { ::i2c::class_of<TContainer>(), ::i2c::class_of<TList>(), ::i2c::class_of<TElement>() },
                                         { ::i2c::type_of<::Unity::Properties::Property_2<TContainer, TList>*>(), ::i2c::type_of<::by_ref<TContainer>>(), ::i2c::type_of<::by_ref<TList>>() } })));
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>(), ::i2c::class_of<TList>(), ::i2c::class_of<TElement>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, container, list);
}
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor::VisitPropertyType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(), { "VisitPropertyType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void UnityEngine::UIElements::Internal::AutoCompletePathVisitor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor* UnityEngine::UIElements::Internal::AutoCompletePathVisitor::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Internal::AutoCompletePathVisitor*>());
}
/// @brief Convert operator to "::Unity::Properties::ITypeVisitor"
constexpr UnityEngine::UIElements::Internal::AutoCompletePathVisitor::operator ::Unity::Properties::ITypeVisitor*() noexcept {
  return static_cast<::Unity::Properties::ITypeVisitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::ITypeVisitor"
constexpr ::Unity::Properties::ITypeVisitor* UnityEngine::UIElements::Internal::AutoCompletePathVisitor::i___Unity__Properties__ITypeVisitor() noexcept {
  return static_cast<::Unity::Properties::ITypeVisitor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyVisitor"
constexpr UnityEngine::UIElements::Internal::AutoCompletePathVisitor::operator ::Unity::Properties::IPropertyVisitor*() noexcept {
  return static_cast<::Unity::Properties::IPropertyVisitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyVisitor"
constexpr ::Unity::Properties::IPropertyVisitor* UnityEngine::UIElements::Internal::AutoCompletePathVisitor::i___Unity__Properties__IPropertyVisitor() noexcept {
  return static_cast<::Unity::Properties::IPropertyVisitor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IPropertyBagVisitor"
constexpr UnityEngine::UIElements::Internal::AutoCompletePathVisitor::operator ::Unity::Properties::IPropertyBagVisitor*() noexcept {
  return static_cast<::Unity::Properties::IPropertyBagVisitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IPropertyBagVisitor"
constexpr ::Unity::Properties::IPropertyBagVisitor* UnityEngine::UIElements::Internal::AutoCompletePathVisitor::i___Unity__Properties__IPropertyBagVisitor() noexcept {
  return static_cast<::Unity::Properties::IPropertyBagVisitor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Unity::Properties::IListPropertyVisitor"
constexpr UnityEngine::UIElements::Internal::AutoCompletePathVisitor::operator ::Unity::Properties::IListPropertyVisitor*() noexcept {
  return static_cast<::Unity::Properties::IListPropertyVisitor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Properties::IListPropertyVisitor"
constexpr ::Unity::Properties::IListPropertyVisitor* UnityEngine::UIElements::Internal::AutoCompletePathVisitor::i___Unity__Properties__IListPropertyVisitor() noexcept {
  return static_cast<::Unity::Properties::IListPropertyVisitor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Internal::AutoCompletePathVisitor::AutoCompletePathVisitor() {}

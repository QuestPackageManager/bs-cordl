#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBinding.hpp"
#include "Unity/Properties/zzzz__PropertyPath_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DataBinding_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "Unity/Properties/zzzz__VisitReturnCode_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
#include "UnityEngine/UIElements/zzzz__ConverterGroup_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDataSourceProvider_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.get_updateUIMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)()>(&::UnityEngine::UIElements::DataBinding::get_updateUIMethod)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c2efcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_updateUIMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.CacheReflectionInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)()>(&::UnityEngine::UIElements::DataBinding::CacheReflectionInfo)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6c3ba60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "CacheReflectionInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.get_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::DataBinding::*)()>(&::UnityEngine::UIElements::DataBinding::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c3bbf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_dataSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.set_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBinding::*)(::System::Object*)>(&::UnityEngine::UIElements::DataBinding::set_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c3bbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "set_dataSource", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.get_dataSourceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::UIElements::DataBinding::*)()>(&::UnityEngine::UIElements::DataBinding::get_dataSourceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c3bc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_dataSourceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.set_dataSourceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBinding::*)(::System::Type*)>(&::UnityEngine::UIElements::DataBinding::set_dataSourceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c3bc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "set_dataSourceType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.get_dataSourcePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Properties::PropertyPath (::UnityEngine::UIElements::DataBinding::*)()>(&::UnityEngine::UIElements::DataBinding::get_dataSourcePath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c3bc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_dataSourcePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.set_dataSourcePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBinding::*)(::Unity::Properties::PropertyPath)>(
    &::UnityEngine::UIElements::DataBinding::set_dataSourcePath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c3bc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "set_dataSourcePath", {}, { ::i2c::type_of<::Unity::Properties::PropertyPath>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.get_bindingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingMode (::UnityEngine::UIElements::DataBinding::*)()>(
    &::UnityEngine::UIElements::DataBinding::get_bindingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c3bc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_bindingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.set_bindingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBinding::*)(::UnityEngine::UIElements::BindingMode)>(
    &::UnityEngine::UIElements::DataBinding::set_bindingMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c3bc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "set_bindingMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.get_sourceToUiConverters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ConverterGroup* (::UnityEngine::UIElements::DataBinding::*)()>(
    &::UnityEngine::UIElements::DataBinding::get_sourceToUiConverters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c3bc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_sourceToUiConverters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.get_uiToSourceConverters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ConverterGroup* (::UnityEngine::UIElements::DataBinding::*)()>(
    &::UnityEngine::UIElements::DataBinding::get_uiToSourceConverters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c3bcd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_uiToSourceConverters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.ApplyConverterGroupToSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBinding::*)(::UnityEngine::UIElements::ConverterGroup*)>(
    &::UnityEngine::UIElements::DataBinding::ApplyConverterGroupToSource)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c3bd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(),
                                                                                           { "ApplyConverterGroupToSource", {}, { ::i2c::type_of<::UnityEngine::UIElements::ConverterGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DataBinding.ApplyConverterGroupToUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DataBinding::*)(::UnityEngine::UIElements::ConverterGroup*)>(
    &::UnityEngine::UIElements::DataBinding::ApplyConverterGroupToUI)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c3bddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(),
                                                                                           { "ApplyConverterGroupToUI", {}, { ::i2c::type_of<::UnityEngine::UIElements::ConverterGroup*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::BindingMode& UnityEngine::UIElements::DataBinding::__cordl_internal_get_m_BindingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingMode;
}
constexpr ::UnityEngine::UIElements::BindingMode const& UnityEngine::UIElements::DataBinding::__cordl_internal_get_m_BindingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingMode;
}
constexpr void UnityEngine::UIElements::DataBinding::__cordl_internal_set_m_BindingMode(::UnityEngine::UIElements::BindingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingMode = value;
}
constexpr ::UnityEngine::UIElements::ConverterGroup*& UnityEngine::UIElements::DataBinding::__cordl_internal_get_m_SourceToUiConverters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceToUiConverters;
}
constexpr ::UnityEngine::UIElements::ConverterGroup* const& UnityEngine::UIElements::DataBinding::__cordl_internal_get_m_SourceToUiConverters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SourceToUiConverters;
}
constexpr void UnityEngine::UIElements::DataBinding::__cordl_internal_set_m_SourceToUiConverters(::UnityEngine::UIElements::ConverterGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SourceToUiConverters = value;
}
constexpr ::UnityEngine::UIElements::ConverterGroup*& UnityEngine::UIElements::DataBinding::__cordl_internal_get_m_UiToSourceConverters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UiToSourceConverters;
}
constexpr ::UnityEngine::UIElements::ConverterGroup* const& UnityEngine::UIElements::DataBinding::__cordl_internal_get_m_UiToSourceConverters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UiToSourceConverters;
}
constexpr void UnityEngine::UIElements::DataBinding::__cordl_internal_set_m_UiToSourceConverters(::UnityEngine::UIElements::ConverterGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UiToSourceConverters = value;
}
constexpr ::System::Object*& UnityEngine::UIElements::DataBinding::__cordl_internal_get__dataSource_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource_k__BackingField;
}
constexpr ::System::Object* const& UnityEngine::UIElements::DataBinding::__cordl_internal_get__dataSource_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource_k__BackingField;
}
constexpr void UnityEngine::UIElements::DataBinding::__cordl_internal_set__dataSource_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSource_k__BackingField = value;
}
constexpr ::System::Type*& UnityEngine::UIElements::DataBinding::__cordl_internal_get__dataSourceType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSourceType_k__BackingField;
}
constexpr ::System::Type* const& UnityEngine::UIElements::DataBinding::__cordl_internal_get__dataSourceType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSourceType_k__BackingField;
}
constexpr void UnityEngine::UIElements::DataBinding::__cordl_internal_set__dataSourceType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSourceType_k__BackingField = value;
}
constexpr ::Unity::Properties::PropertyPath& UnityEngine::UIElements::DataBinding::__cordl_internal_get__dataSourcePath_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSourcePath_k__BackingField;
}
constexpr ::Unity::Properties::PropertyPath const& UnityEngine::UIElements::DataBinding::__cordl_internal_get__dataSourcePath_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSourcePath_k__BackingField;
}
constexpr void UnityEngine::UIElements::DataBinding::__cordl_internal_set__dataSourcePath_k__BackingField(::Unity::Properties::PropertyPath value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSourcePath_k__BackingField = value;
}
inline void UnityEngine::UIElements::DataBinding::setStaticF_s_UpdateUIMethodInfo(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "s_UpdateUIMethodInfo", ::UnityEngine::UIElements::DataBinding*>(std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* UnityEngine::UIElements::DataBinding::getStaticF_s_UpdateUIMethodInfo() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "s_UpdateUIMethodInfo", ::UnityEngine::UIElements::DataBinding*>();
}
inline ::System::Reflection::MethodInfo* UnityEngine::UIElements::DataBinding::get_updateUIMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_updateUIMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method);
}
inline ::System::Reflection::MethodInfo* UnityEngine::UIElements::DataBinding::CacheReflectionInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "CacheReflectionInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::DataBinding::get_dataSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_dataSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBinding::set_dataSource(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "set_dataSource", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* UnityEngine::UIElements::DataBinding::get_dataSourceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_dataSourceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBinding::set_dataSourceType(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "set_dataSourceType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Properties::PropertyPath UnityEngine::UIElements::DataBinding::get_dataSourcePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_dataSourcePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Properties::PropertyPath>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBinding::set_dataSourcePath(::Unity::Properties::PropertyPath value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "set_dataSourcePath", {}, { ::i2c::type_of<::Unity::Properties::PropertyPath>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::BindingMode UnityEngine::UIElements::DataBinding::get_bindingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_bindingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingMode>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBinding::set_bindingMode(::UnityEngine::UIElements::BindingMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "set_bindingMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::BindingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ConverterGroup* UnityEngine::UIElements::DataBinding::get_sourceToUiConverters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_sourceToUiConverters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ConverterGroup*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ConverterGroup* UnityEngine::UIElements::DataBinding::get_uiToSourceConverters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), { "get_uiToSourceConverters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ConverterGroup*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DataBinding::ApplyConverterGroupToSource(::UnityEngine::UIElements::ConverterGroup* group) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(),
                                                                                         { "ApplyConverterGroupToSource", {}, { ::i2c::type_of<::UnityEngine::UIElements::ConverterGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline void UnityEngine::UIElements::DataBinding::ApplyConverterGroupToUI(::UnityEngine::UIElements::ConverterGroup* group) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(),
                                                                                         { "ApplyConverterGroupToUI", {}, { ::i2c::type_of<::UnityEngine::UIElements::ConverterGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
template <typename TValue>
inline ::UnityEngine::UIElements::BindingResult UnityEngine::UIElements::DataBinding::UpdateUI(::by_ref<::UnityEngine::UIElements::BindingContext> context, ::by_ref<TValue> value) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), 9 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingResult>(this, ___internal_method, context, value);
}
template <typename TValue>
inline ::UnityEngine::UIElements::BindingResult UnityEngine::UIElements::DataBinding::UpdateSource(::by_ref<::UnityEngine::UIElements::BindingContext> context, ::by_ref<TValue> value) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(), 10 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingResult>(this, ___internal_method, context, value);
}
template <typename TValue>
inline ::StringW UnityEngine::UIElements::DataBinding::GetSetValueErrorString(::Unity::Properties::VisitReturnCode returnCode, ::System::Object* source,
                                                                              ::by_ref<::Unity::Properties::PropertyPath> sourcePath, ::System::Object* target,
                                                                              ::by_ref<::UnityEngine::UIElements::BindingId> targetPath, TValue extractedValueFromSource) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DataBinding*>(),
                                       { "GetSetValueErrorString",
                                         { ::i2c::class_of<TValue>() },
                                         { ::i2c::type_of<::Unity::Properties::VisitReturnCode>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::Unity::Properties::PropertyPath>>(),
                                           ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::BindingId>>(), ::i2c::type_of<TValue>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, returnCode, source, sourcePath, target, targetPath, extractedValueFromSource);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IDataSourceProvider"
constexpr UnityEngine::UIElements::DataBinding::operator ::UnityEngine::UIElements::IDataSourceProvider*() noexcept {
  return static_cast<::UnityEngine::UIElements::IDataSourceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IDataSourceProvider"
constexpr ::UnityEngine::UIElements::IDataSourceProvider* UnityEngine::UIElements::DataBinding::i___UnityEngine__UIElements__IDataSourceProvider() noexcept {
  return static_cast<::UnityEngine::UIElements::IDataSourceProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DataBinding::DataBinding() {}

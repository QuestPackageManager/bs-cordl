#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DragAndDropData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropData_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropData.GetGenericData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::DragAndDropData::*)(::StringW)>(&::UnityEngine::UIElements::DragAndDropData::GetGenericData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropData*>(), { ::i2c::class_of<::UnityEngine::UIElements::DragAndDropData*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropData.get_source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::DragAndDropData::*)()>(&::UnityEngine::UIElements::DragAndDropData::get_source)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropData*>(), { ::i2c::class_of<::UnityEngine::UIElements::DragAndDropData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropData.set_paths
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragAndDropData::*)(::ArrayW<::StringW>)>(&::UnityEngine::UIElements::DragAndDropData::set_paths)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d8ba48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropData*>(), { ::i2c::class_of<::UnityEngine::UIElements::DragAndDropData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragAndDropData::*)()>(&::UnityEngine::UIElements::DragAndDropData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d8a6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& UnityEngine::UIElements::DragAndDropData::__cordl_internal_get__paths_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paths_k__BackingField;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::UIElements::DragAndDropData::__cordl_internal_get__paths_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paths_k__BackingField;
}
constexpr void UnityEngine::UIElements::DragAndDropData::__cordl_internal_set__paths_k__BackingField(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paths_k__BackingField = value;
}
inline ::System::Object* UnityEngine::UIElements::DragAndDropData::GetGenericData(::StringW key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DragAndDropData*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline ::System::Object* UnityEngine::UIElements::DragAndDropData::get_source() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DragAndDropData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DragAndDropData::set_paths(::ArrayW<::StringW> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DragAndDropData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DragAndDropData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DragAndDropData* UnityEngine::UIElements::DragAndDropData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DragAndDropData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DragAndDropData::DragAndDropData() {}

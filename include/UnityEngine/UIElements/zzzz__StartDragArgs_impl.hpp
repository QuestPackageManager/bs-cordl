#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StartDragArgs.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StartDragArgs::*)(::StringW, ::UnityEngine::UIElements::DragVisualMode)>(
    &::UnityEngine::UIElements::StartDragArgs::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x72171b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::DragVisualMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StartDragArgs::*)(::StringW, ::UnityEngine::UIElements::DragVisualMode, ::UnityEngine::EventModifiers)>(
    &::UnityEngine::UIElements::StartDragArgs::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x72194b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::DragVisualMode>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs.get_title
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StartDragArgs::*)()>(&::UnityEngine::UIElements::StartDragArgs::get_title)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72194c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "get_title", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs.get_visualMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::StartDragArgs::*)()>(
    &::UnityEngine::UIElements::StartDragArgs::get_visualMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72194cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "get_visualMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs.set_modifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StartDragArgs::*)(::UnityEngine::EventModifiers)>(&::UnityEngine::UIElements::StartDragArgs::set_modifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72194d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "set_modifiers", {}, { ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs.get_genericData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (::UnityEngine::UIElements::StartDragArgs::*)()>(&::UnityEngine::UIElements::StartDragArgs::get_genericData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72194dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "get_genericData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs.set_genericData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StartDragArgs::*)(::System::Collections::Hashtable*)>(
    &::UnityEngine::UIElements::StartDragArgs::set_genericData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72194e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "set_genericData", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs.get_entityIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>* (::UnityEngine::UIElements::StartDragArgs::*)()>(
    &::UnityEngine::UIElements::StartDragArgs::get_entityIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72194ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "get_entityIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs.set_entityIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StartDragArgs::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>*)>(
    &::UnityEngine::UIElements::StartDragArgs::set_entityIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72194f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(),
                                                             { "set_entityIds", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs.get_assetPaths
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::UIElements::StartDragArgs::*)()>(&::UnityEngine::UIElements::StartDragArgs::get_assetPaths)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72194fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "get_assetPaths", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs.set_assetPaths
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StartDragArgs::*)(::ArrayW<::StringW>)>(&::UnityEngine::UIElements::StartDragArgs::set_assetPaths)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7219504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "set_assetPaths", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::StartDragArgs.SetGenericData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::StartDragArgs::*)(::StringW, ::System::Object*)>(&::UnityEngine::UIElements::StartDragArgs::SetGenericData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x721950c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "SetGenericData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::StartDragArgs::_ctor(::StringW title, ::UnityEngine::UIElements::DragVisualMode visualMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::DragVisualMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, title, visualMode);
}
inline void UnityEngine::UIElements::StartDragArgs::_ctor(::StringW title, ::UnityEngine::UIElements::DragVisualMode visualMode, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::UIElements::DragVisualMode>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, title, visualMode, modifiers);
}
inline ::StringW UnityEngine::UIElements::StartDragArgs::get_title() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "get_title", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::StartDragArgs::get_visualMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "get_visualMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StartDragArgs::set_modifiers(::UnityEngine::EventModifiers value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "set_modifiers", {}, { ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Hashtable* UnityEngine::UIElements::StartDragArgs::get_genericData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "get_genericData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StartDragArgs::set_genericData(::System::Collections::Hashtable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "set_genericData", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>* UnityEngine::UIElements::StartDragArgs::get_entityIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "get_entityIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StartDragArgs::set_entityIds(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(),
                                                           { "set_entityIds", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::StringW> UnityEngine::UIElements::StartDragArgs::get_assetPaths() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "get_assetPaths", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::StartDragArgs::set_assetPaths(::ArrayW<::StringW> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "set_assetPaths", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::StartDragArgs::SetGenericData(::StringW key, ::System::Object* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StartDragArgs>(), { "SetGenericData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, data);
}
// Ctor Parameters [CppParam { name: "_title_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_visualMode_k__BackingField", ty:
// "::UnityEngine::UIElements::DragVisualMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_modifiers_k__BackingField", ty: "::UnityEngine::EventModifiers", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "_genericData_k__BackingField", ty: "::System::Collections::Hashtable*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam
// { name: "_entityIds_k__BackingField", ty: "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "_assetPaths_k__BackingField", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::StartDragArgs::StartDragArgs(::StringW _title_k__BackingField, ::UnityEngine::UIElements::DragVisualMode _visualMode_k__BackingField,
                                                                  ::UnityEngine::EventModifiers _modifiers_k__BackingField, ::System::Collections::Hashtable* _genericData_k__BackingField,
                                                                  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::EntityId>* _entityIds_k__BackingField,
                                                                  ::ArrayW<::StringW> _assetPaths_k__BackingField) noexcept {
  this->_title_k__BackingField = _title_k__BackingField;
  this->_visualMode_k__BackingField = _visualMode_k__BackingField;
  this->_modifiers_k__BackingField = _modifiers_k__BackingField;
  this->_genericData_k__BackingField = _genericData_k__BackingField;
  this->_entityIds_k__BackingField = _entityIds_k__BackingField;
  this->_assetPaths_k__BackingField = _assetPaths_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StartDragArgs::StartDragArgs() {}

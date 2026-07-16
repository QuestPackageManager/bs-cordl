#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragAndDropArgs.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropData_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__IListDragAndDropArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropArgs.set_target
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragAndDropArgs::*)(::System::Object*)>(&::UnityEngine::UIElements::DragAndDropArgs::set_target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d884c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "set_target", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropArgs.get_insertAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::DragAndDropArgs::*)()>(&::UnityEngine::UIElements::DragAndDropArgs::get_insertAtIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d884d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "get_insertAtIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropArgs.set_insertAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragAndDropArgs::*)(int32_t)>(&::UnityEngine::UIElements::DragAndDropArgs::set_insertAtIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d884d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "set_insertAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropArgs.get_parentId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::DragAndDropArgs::*)()>(&::UnityEngine::UIElements::DragAndDropArgs::get_parentId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d884e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "get_parentId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropArgs.set_parentId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragAndDropArgs::*)(int32_t)>(&::UnityEngine::UIElements::DragAndDropArgs::set_parentId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d884e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "set_parentId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropArgs.get_childIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::DragAndDropArgs::*)()>(&::UnityEngine::UIElements::DragAndDropArgs::get_childIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d884f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "get_childIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropArgs.set_childIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragAndDropArgs::*)(int32_t)>(&::UnityEngine::UIElements::DragAndDropArgs::set_childIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d884f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "set_childIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropArgs.get_dragAndDropPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DragAndDropPosition (::UnityEngine::UIElements::DragAndDropArgs::*)()>(
    &::UnityEngine::UIElements::DragAndDropArgs::get_dragAndDropPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d88500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "get_dragAndDropPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropArgs.set_dragAndDropPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragAndDropArgs::*)(::UnityEngine::UIElements::DragAndDropPosition)>(
    &::UnityEngine::UIElements::DragAndDropArgs::set_dragAndDropPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d88508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(),
                                                                                           { "set_dragAndDropPosition", {}, { ::i2c::type_of<::UnityEngine::UIElements::DragAndDropPosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropArgs.get_dragAndDropData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DragAndDropData* (::UnityEngine::UIElements::DragAndDropArgs::*)()>(
    &::UnityEngine::UIElements::DragAndDropArgs::get_dragAndDropData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d88510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "get_dragAndDropData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DragAndDropArgs.set_dragAndDropData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DragAndDropArgs::*)(::UnityEngine::UIElements::DragAndDropData*)>(
    &::UnityEngine::UIElements::DragAndDropArgs::set_dragAndDropData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d88518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(),
                                                                                           { "set_dragAndDropData", {}, { ::i2c::type_of<::UnityEngine::UIElements::DragAndDropData*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DragAndDropArgs::set_target(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "set_target", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::DragAndDropArgs::get_insertAtIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "get_insertAtIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::DragAndDropArgs::set_insertAtIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "set_insertAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::DragAndDropArgs::get_parentId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "get_parentId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::DragAndDropArgs::set_parentId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "set_parentId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::DragAndDropArgs::get_childIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "get_childIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::DragAndDropArgs::set_childIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "set_childIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::DragAndDropPosition UnityEngine::UIElements::DragAndDropArgs::get_dragAndDropPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "get_dragAndDropPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragAndDropPosition>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::DragAndDropArgs::set_dragAndDropPosition(::UnityEngine::UIElements::DragAndDropPosition value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(),
                                                                                         { "set_dragAndDropPosition", {}, { ::i2c::type_of<::UnityEngine::UIElements::DragAndDropPosition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::DragAndDropData* UnityEngine::UIElements::DragAndDropArgs::get_dragAndDropData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(), { "get_dragAndDropData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragAndDropData*>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::DragAndDropArgs::set_dragAndDropData(::UnityEngine::UIElements::DragAndDropData* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DragAndDropArgs>(),
                                                                                         { "set_dragAndDropData", {}, { ::i2c::type_of<::UnityEngine::UIElements::DragAndDropData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
/// @brief Convert operator to "::UnityEngine::UIElements::IListDragAndDropArgs"
constexpr UnityEngine::UIElements::DragAndDropArgs::operator ::UnityEngine::UIElements::IListDragAndDropArgs*() {
  return static_cast<::UnityEngine::UIElements::IListDragAndDropArgs*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::UIElements::IListDragAndDropArgs"
constexpr ::UnityEngine::UIElements::IListDragAndDropArgs* UnityEngine::UIElements::DragAndDropArgs::i___UnityEngine__UIElements__IListDragAndDropArgs() {
  return static_cast<::UnityEngine::UIElements::IListDragAndDropArgs*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_target_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_insertAtIndex_k__BackingField", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_parentId_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_childIndex_k__BackingField", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_dragAndDropPosition_k__BackingField", ty: "::UnityEngine::UIElements::DragAndDropPosition", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_dragAndDropData_k__BackingField", ty: "::UnityEngine::UIElements::DragAndDropData*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::DragAndDropArgs::DragAndDropArgs(::System::Object* _target_k__BackingField, int32_t _insertAtIndex_k__BackingField, int32_t _parentId_k__BackingField,
                                                                      int32_t _childIndex_k__BackingField, ::UnityEngine::UIElements::DragAndDropPosition _dragAndDropPosition_k__BackingField,
                                                                      ::UnityEngine::UIElements::DragAndDropData* _dragAndDropData_k__BackingField) noexcept {
  this->_target_k__BackingField = _target_k__BackingField;
  this->_insertAtIndex_k__BackingField = _insertAtIndex_k__BackingField;
  this->_parentId_k__BackingField = _parentId_k__BackingField;
  this->_childIndex_k__BackingField = _childIndex_k__BackingField;
  this->_dragAndDropPosition_k__BackingField = _dragAndDropPosition_k__BackingField;
  this->_dragAndDropData_k__BackingField = _dragAndDropData_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DragAndDropArgs::DragAndDropArgs() {}

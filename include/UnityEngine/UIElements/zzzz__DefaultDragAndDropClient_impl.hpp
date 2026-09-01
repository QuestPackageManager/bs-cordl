#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DefaultDragAndDropClient.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultDragAndDropClient_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropData_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDrop_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient.get_source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(
    &::UnityEngine::UIElements::DefaultDragAndDropClient::get_source)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d89d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient.GetGenericData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::UIElements::DefaultDragAndDropClient::*)(::StringW)>(
    &::UnityEngine::UIElements::DefaultDragAndDropClient::GetGenericData)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6d89dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient.StartDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultDragAndDropClient::*)(::UnityEngine::UIElements::StartDragArgs, ::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::DefaultDragAndDropClient::StartDrag)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x6d89e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(),
                                                             { "StartDrag", {}, { ::i2c::type_of<::UnityEngine::UIElements::StartDragArgs>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient.UpdateDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultDragAndDropClient::*)(::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::DefaultDragAndDropClient::UpdateDrag)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6d8a4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), { "UpdateDrag", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient.AcceptDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(&::UnityEngine::UIElements::DefaultDragAndDropClient::AcceptDrag)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d8a66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), { "AcceptDrag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient.SetVisualMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultDragAndDropClient::*)(::UnityEngine::UIElements::DragVisualMode)>(
    &::UnityEngine::UIElements::DefaultDragAndDropClient::SetVisualMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d8a670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(),
                                                                                           { "SetVisualMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::DragVisualMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient.DragCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(&::UnityEngine::UIElements::DefaultDragAndDropClient::DragCleanup)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6d8a678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), { "DragCleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient.get_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DragAndDropData* (::UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(
    &::UnityEngine::UIElements::DefaultDragAndDropClient::get_data)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d8a6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), { "get_data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultDragAndDropClient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DefaultDragAndDropClient::*)()>(&::UnityEngine::UIElements::DefaultDragAndDropClient::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6d89d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_get_m_GenericData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GenericData;
}
constexpr ::System::Collections::Hashtable* const& UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_get_m_GenericData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GenericData;
}
constexpr void UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_set_m_GenericData(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GenericData = value;
}
constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_get_m_DraggedInfoLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DraggedInfoLabel;
}
constexpr ::UnityEngine::UIElements::Label* const& UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_get_m_DraggedInfoLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DraggedInfoLabel;
}
constexpr void UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_set_m_DraggedInfoLabel(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DraggedInfoLabel = value;
}
constexpr ::UnityEngine::UIElements::DragVisualMode& UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_get_m_VisualMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualMode;
}
constexpr ::UnityEngine::UIElements::DragVisualMode const& UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_get_m_VisualMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisualMode;
}
constexpr void UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_set_m_VisualMode(::UnityEngine::UIElements::DragVisualMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VisualMode = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_get_m_UnityObjectReferences() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnityObjectReferences;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>* const&
UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_get_m_UnityObjectReferences() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnityObjectReferences;
}
constexpr void UnityEngine::UIElements::DefaultDragAndDropClient::__cordl_internal_set_m_UnityObjectReferences(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Object>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UnityObjectReferences = value;
}
inline ::System::Object* UnityEngine::UIElements::DefaultDragAndDropClient::get_source() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::UIElements::DefaultDragAndDropClient::GetGenericData(::StringW key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
inline void UnityEngine::UIElements::DefaultDragAndDropClient::StartDrag(::UnityEngine::UIElements::StartDragArgs args, ::UnityEngine::Vector3 pointerPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(),
                                                           { "StartDrag", {}, { ::i2c::type_of<::UnityEngine::UIElements::StartDragArgs>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args, pointerPosition);
}
inline void UnityEngine::UIElements::DefaultDragAndDropClient::UpdateDrag(::UnityEngine::Vector3 pointerPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), { "UpdateDrag", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerPosition);
}
inline void UnityEngine::UIElements::DefaultDragAndDropClient::AcceptDrag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), { "AcceptDrag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultDragAndDropClient::SetVisualMode(::UnityEngine::UIElements::DragVisualMode mode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(),
                                                                                         { "SetVisualMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::DragVisualMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void UnityEngine::UIElements::DefaultDragAndDropClient::DragCleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), { "DragCleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DragAndDropData* UnityEngine::UIElements::DefaultDragAndDropClient::get_data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), { "get_data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragAndDropData*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultDragAndDropClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DefaultDragAndDropClient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DefaultDragAndDropClient* UnityEngine::UIElements::DefaultDragAndDropClient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DefaultDragAndDropClient*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IDragAndDrop"
constexpr UnityEngine::UIElements::DefaultDragAndDropClient::operator ::UnityEngine::UIElements::IDragAndDrop*() noexcept {
  return static_cast<::UnityEngine::UIElements::IDragAndDrop*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IDragAndDrop"
constexpr ::UnityEngine::UIElements::IDragAndDrop* UnityEngine::UIElements::DefaultDragAndDropClient::i___UnityEngine__UIElements__IDragAndDrop() noexcept {
  return static_cast<::UnityEngine::UIElements::IDragAndDrop*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DefaultDragAndDropClient::DefaultDragAndDropClient() {}

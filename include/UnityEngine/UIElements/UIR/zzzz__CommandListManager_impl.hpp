#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/CommandListManager.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureSlotCount_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandListManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandFlags_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandList_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureSlotCount_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIRenderer_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandListManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandListManager::*)(::System::IntPtr, ::System::IntPtr)>(
    &::UnityEngine::UIElements::UIR::CommandListManager::_ctor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x716228c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandListManager.get_defaultCommandList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::CommandList* (::UnityEngine::UIElements::UIR::CommandListManager::*)()>(
    &::UnityEngine::UIElements::UIR::CommandListManager::get_defaultCommandList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7162480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "get_defaultCommandList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandListManager.GetOrCreateCommandList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::CommandList* (
    ::UnityEngine::UIElements::UIR::CommandListManager::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Material*, ::UnityEngine::UIElements::UIR::CommandFlags)>(
    &::UnityEngine::UIElements::UIR::CommandListManager::GetOrCreateCommandList)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x7162488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(),
                                                                                           { "GetOrCreateCommandList",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::UIR::CommandFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandListManager.AdvanceFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandListManager::*)()>(&::UnityEngine::UIElements::UIR::CommandListManager::AdvanceFrame)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x71625e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "AdvanceFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandListManager.BeginSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandListManager::*)(::UnityEngine::UIElements::TextureSlotCount)>(
    &::UnityEngine::UIElements::UIR::CommandListManager::BeginSerialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x71628cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(),
                                                                                           { "BeginSerialize", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureSlotCount>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandListManager.EndSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandListManager::*)()>(&::UnityEngine::UIElements::UIR::CommandListManager::EndSerialize)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x71628f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "EndSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandListManager.get_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::CommandListManager::*)()>(&::UnityEngine::UIElements::UIR::CommandListManager::get_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7162b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "get_disposed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandListManager.set_disposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandListManager::*)(bool)>(&::UnityEngine::UIElements::UIR::CommandListManager::set_disposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7162b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandListManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandListManager::*)()>(&::UnityEngine::UIElements::UIR::CommandListManager::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7162b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandListManager.ResetUIRendererDrawCallData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandListManager::*)()>(
    &::UnityEngine::UIElements::UIR::CommandListManager::ResetUIRendererDrawCallData)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x7162724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "ResetUIRendererDrawCallData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::CommandListManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::CommandListManager::*)(bool)>(&::UnityEngine::UIElements::UIR::CommandListManager::Dispose)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x7162b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_VertexDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexDecl;
}
constexpr ::System::IntPtr const& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_VertexDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VertexDecl;
}
constexpr void UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_set_m_VertexDecl(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VertexDecl = value;
}
constexpr ::System::IntPtr& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_DefaultStencilState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr ::System::IntPtr const& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_DefaultStencilState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr void UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_set_m_DefaultStencilState(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultStencilState = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_CurrentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentIndex;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_CurrentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentIndex;
}
constexpr void UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_set_m_CurrentIndex(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentIndex = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::CommandList*>*& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_CommandListPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandListPool;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::CommandList*>* const&
UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_CommandListPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandListPool;
}
constexpr void UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_set_m_CommandListPool(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::CommandList*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CommandListPool = value;
}
constexpr ::UnityEngine::UIElements::UIR::CommandList*& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_DefaultCommandList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultCommandList;
}
constexpr ::UnityEngine::UIElements::UIR::CommandList* const& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_DefaultCommandList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultCommandList;
}
constexpr void UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_set_m_DefaultCommandList(::UnityEngine::UIElements::UIR::CommandList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultCommandList = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>&
UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_CommandListsArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandListsArray;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*> const&
UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_CommandListsArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CommandListsArray;
}
constexpr void
UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_set_m_CommandListsArray(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CommandListsArray = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_CurrentFrameCommandLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameCommandLists;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>* const&
UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_CurrentFrameCommandLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameCommandLists;
}
constexpr void
UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_set_m_CurrentFrameCommandLists(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentFrameCommandLists = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIRenderer>>*&
UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_UIRenderersWithDrawCallData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIRenderersWithDrawCallData;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIRenderer>>* const&
UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_UIRenderersWithDrawCallData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIRenderersWithDrawCallData;
}
constexpr void
UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_set_m_UIRenderersWithDrawCallData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIRenderer>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UIRenderersWithDrawCallData = value;
}
constexpr ::UnityEngine::UIElements::TextureSlotCount& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_TextureSlotCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureSlotCount;
}
constexpr ::UnityEngine::UIElements::TextureSlotCount const& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get_m_TextureSlotCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextureSlotCount;
}
constexpr void UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_set_m_TextureSlotCount(::UnityEngine::UIElements::TextureSlotCount value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextureSlotCount = value;
}
constexpr bool& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::CommandListManager::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
inline void UnityEngine::UIElements::UIR::CommandListManager::_ctor(::System::IntPtr vertexDecl, ::System::IntPtr defaultStencilState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vertexDecl, defaultStencilState);
}
inline ::UnityEngine::UIElements::UIR::CommandList* UnityEngine::UIElements::UIR::CommandListManager::get_defaultCommandList() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "get_defaultCommandList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::CommandList*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::CommandList* UnityEngine::UIElements::UIR::CommandListManager::GetOrCreateCommandList(::UnityEngine::UIElements::VisualElement* owner,
                                                                                                                             ::UnityEngine::Material* material,
                                                                                                                             ::UnityEngine::UIElements::UIR::CommandFlags commandFlags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(),
                                                                                         { "GetOrCreateCommandList",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::UIR::CommandFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::CommandList*>(this, ___internal_method, owner, material, commandFlags);
}
inline void UnityEngine::UIElements::UIR::CommandListManager::AdvanceFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "AdvanceFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::CommandListManager::BeginSerialize(::UnityEngine::UIElements::TextureSlotCount textureSlotCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(),
                                                                                         { "BeginSerialize", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureSlotCount>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textureSlotCount);
}
inline void UnityEngine::UIElements::UIR::CommandListManager::EndSerialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "EndSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::CommandListManager::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::CommandListManager::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIR::CommandListManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::CommandListManager::ResetUIRendererDrawCallData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "ResetUIRendererDrawCallData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::CommandListManager::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::CommandListManager*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::UnityEngine::UIElements::UIR::CommandListManager* UnityEngine::UIElements::UIR::CommandListManager::New_ctor(::System::IntPtr vertexDecl, ::System::IntPtr defaultStencilState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::CommandListManager*>(vertexDecl, defaultStencilState));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::UIR::CommandListManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::CommandListManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::CommandListManager::CommandListManager() {}

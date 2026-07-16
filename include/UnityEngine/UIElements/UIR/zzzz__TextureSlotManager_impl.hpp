#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TextureSlotManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureSlotManager_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__CommandList_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureRegistry_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureSlotManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TextureSlotManager::*)()>(&::UnityEngine::UIElements::UIR::TextureSlotManager::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6cefff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureSlotManager.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TextureSlotManager::*)()>(&::UnityEngine::UIElements::UIR::TextureSlotManager::Reset)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6cf0178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureSlotManager.StartNewBatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TextureSlotManager::*)()>(&::UnityEngine::UIElements::UIR::TextureSlotManager::StartNewBatch)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6cf03d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "StartNewBatch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureSlotManager.IndexOf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIR::TextureSlotManager::*)(::UnityEngine::UIElements::TextureId)>(
    &::UnityEngine::UIElements::UIR::TextureSlotManager::IndexOf)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6cf0440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "IndexOf", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureSlotManager.MarkUsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TextureSlotManager::*)(int32_t)>(&::UnityEngine::UIElements::UIR::TextureSlotManager::MarkUsed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6cf052c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "MarkUsed", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureSlotManager.get_FreeSlots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIR::TextureSlotManager::*)()>(&::UnityEngine::UIElements::UIR::TextureSlotManager::get_FreeSlots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cf0584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "get_FreeSlots", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureSlotManager.set_FreeSlots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TextureSlotManager::*)(int32_t)>(&::UnityEngine::UIElements::UIR::TextureSlotManager::set_FreeSlots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cf058c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "set_FreeSlots", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureSlotManager.FindOldestSlot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIR::TextureSlotManager::*)()>(&::UnityEngine::UIElements::UIR::TextureSlotManager::FindOldestSlot)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6cf0594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "FindOldestSlot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureSlotManager.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TextureSlotManager::*)(
    ::UnityEngine::UIElements::TextureId, float_t, float_t, int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::UIElements::UIR::CommandList*)>(
    &::UnityEngine::UIElements::UIR::TextureSlotManager::Bind)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6cf0660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(),
                                                { "Bind",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::CommandList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::TextureSlotManager.SetGpuData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::TextureSlotManager::*)(int32_t, ::UnityEngine::UIElements::TextureId, int32_t, int32_t, float_t, float_t)>(
    &::UnityEngine::UIElements::UIR::TextureSlotManager::SetGpuData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6cf02a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(),
                                                             { "SetGpuData",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::UIElements::TextureId>& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get_m_Textures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures;
}
constexpr ::ArrayW<::UnityEngine::UIElements::TextureId> const& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get_m_Textures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Textures;
}
constexpr void UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_set_m_Textures(::ArrayW<::UnityEngine::UIElements::TextureId> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Textures = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get_m_Tickets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tickets;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get_m_Tickets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tickets;
}
constexpr void UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_set_m_Tickets(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tickets = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get_m_CurrentTicket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTicket;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get_m_CurrentTicket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentTicket;
}
constexpr void UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_set_m_CurrentTicket(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentTicket = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get_m_FirstUsedTicket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstUsedTicket;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get_m_FirstUsedTicket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstUsedTicket;
}
constexpr void UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_set_m_FirstUsedTicket(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstUsedTicket = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get_m_GpuTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GpuTextures;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get_m_GpuTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GpuTextures;
}
constexpr void UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_set_m_GpuTextures(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GpuTextures = value;
}
constexpr int32_t& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get__FreeSlots_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FreeSlots_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get__FreeSlots_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FreeSlots_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_set__FreeSlots_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____FreeSlots_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::TextureRegistry*& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get_textureRegistry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureRegistry;
}
constexpr ::UnityEngine::UIElements::TextureRegistry* const& UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_get_textureRegistry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textureRegistry;
}
constexpr void UnityEngine::UIElements::UIR::TextureSlotManager::__cordl_internal_set_textureRegistry(::UnityEngine::UIElements::TextureRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textureRegistry = value;
}
inline void UnityEngine::UIElements::UIR::TextureSlotManager::setStaticF_k_SlotCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_SlotCount", ::UnityEngine::UIElements::UIR::TextureSlotManager*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::TextureSlotManager::getStaticF_k_SlotCount() {
  return ::cordl_internals::getStaticField<int32_t, "k_SlotCount", ::UnityEngine::UIElements::UIR::TextureSlotManager*>();
}
inline void UnityEngine::UIElements::UIR::TextureSlotManager::setStaticF_k_SlotSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_SlotSize", ::UnityEngine::UIElements::UIR::TextureSlotManager*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::TextureSlotManager::getStaticF_k_SlotSize() {
  return ::cordl_internals::getStaticField<int32_t, "k_SlotSize", ::UnityEngine::UIElements::UIR::TextureSlotManager*>();
}
inline void UnityEngine::UIElements::UIR::TextureSlotManager::setStaticF_slotIds(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "slotIds", ::UnityEngine::UIElements::UIR::TextureSlotManager*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::UIElements::UIR::TextureSlotManager::getStaticF_slotIds() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "slotIds", ::UnityEngine::UIElements::UIR::TextureSlotManager*>();
}
inline void UnityEngine::UIElements::UIR::TextureSlotManager::setStaticF_textureTableId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "textureTableId", ::UnityEngine::UIElements::UIR::TextureSlotManager*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIR::TextureSlotManager::getStaticF_textureTableId() {
  return ::cordl_internals::getStaticField<int32_t, "textureTableId", ::UnityEngine::UIElements::UIR::TextureSlotManager*>();
}
inline void UnityEngine::UIElements::UIR::TextureSlotManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::TextureSlotManager::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::TextureSlotManager::StartNewBatch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "StartNewBatch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::UIR::TextureSlotManager::IndexOf(::UnityEngine::UIElements::TextureId id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "IndexOf", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextureId>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline void UnityEngine::UIElements::UIR::TextureSlotManager::MarkUsed(int32_t slotIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "MarkUsed", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slotIndex);
}
inline int32_t UnityEngine::UIElements::UIR::TextureSlotManager::get_FreeSlots() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "get_FreeSlots", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::TextureSlotManager::set_FreeSlots(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "set_FreeSlots", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::UIR::TextureSlotManager::FindOldestSlot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(), { "FindOldestSlot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::TextureSlotManager::Bind(::UnityEngine::UIElements::TextureId id, float_t sdfScale, float_t sharpness, int32_t slot,
                                                                   ::UnityEngine::MaterialPropertyBlock* mat, ::UnityEngine::UIElements::UIR::CommandList* commandList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(),
                                                           { "Bind",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::CommandList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, sdfScale, sharpness, slot, mat, commandList);
}
inline void UnityEngine::UIElements::UIR::TextureSlotManager::SetGpuData(int32_t slotIndex, ::UnityEngine::UIElements::TextureId id, int32_t textureWidth, int32_t textureHeight, float_t sdfScale,
                                                                         float_t sharpness) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::TextureSlotManager*>(),
                                                           { "SetGpuData",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::TextureId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slotIndex, id, textureWidth, textureHeight, sdfScale, sharpness);
}
inline ::UnityEngine::UIElements::UIR::TextureSlotManager* UnityEngine::UIElements::UIR::TextureSlotManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::TextureSlotManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::TextureSlotManager::TextureSlotManager() {}

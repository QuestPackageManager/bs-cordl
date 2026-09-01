#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TextEventHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextEventHandler_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerOverEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.get_textInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextCore::Text::TextInfo* (::UnityEngine::UIElements::TextEventHandler::*)()>(
    &::UnityEngine::UIElements::TextEventHandler::get_textInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6ca47c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "get_textInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)(::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::TextEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ca2b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.HasAllocatedLinkCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TextEventHandler::*)()>(&::UnityEngine::UIElements::TextEventHandler::HasAllocatedLinkCallbacks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ca47ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "HasAllocatedLinkCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.AllocateLinkCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)()>(&::UnityEngine::UIElements::TextEventHandler::AllocateLinkCallbacks)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6ca47fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "AllocateLinkCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.HasAllocatedATagCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TextEventHandler::*)()>(&::UnityEngine::UIElements::TextEventHandler::HasAllocatedATagCallbacks)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ca4970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "HasAllocatedATagCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.AllocateATagCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)()>(&::UnityEngine::UIElements::TextEventHandler::AllocateATagCallbacks)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6ca4980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "AllocateATagCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.ATagOnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::TextEventHandler::ATagOnPointerUp)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6ca4af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                           { "ATagOnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.ATagOnPointerOver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)(::UnityEngine::UIElements::PointerOverEvent*)>(
    &::UnityEngine::UIElements::TextEventHandler::ATagOnPointerOver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ca4ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                           { "ATagOnPointerOver", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerOverEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.ATagOnPointerMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::TextEventHandler::ATagOnPointerMove)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6ca4cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                           { "ATagOnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.ATagOnPointerOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)(::UnityEngine::UIElements::PointerOutEvent*)>(
    &::UnityEngine::UIElements::TextEventHandler::ATagOnPointerOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ca4f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                           { "ATagOnPointerOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerOutEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.LinkTagOnPointerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::TextEventHandler::LinkTagOnPointerDown)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x6ca4f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                           { "LinkTagOnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.LinkTagOnPointerUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::TextEventHandler::LinkTagOnPointerUp)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x6ca5210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                           { "LinkTagOnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.LinkTagOnPointerMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::TextEventHandler::LinkTagOnPointerMove)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x6ca54b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                           { "LinkTagOnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.LinkTagOnPointerOut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)(::UnityEngine::UIElements::PointerOutEvent*)>(
    &::UnityEngine::UIElements::TextEventHandler::LinkTagOnPointerOut)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6ca59f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                           { "LinkTagOnPointerOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerOutEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.HandleLinkAndATagCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)()>(&::UnityEngine::UIElements::TextEventHandler::HandleLinkAndATagCallbacks)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x6ca3088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "HandleLinkAndATagCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.HandleLinkTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)()>(&::UnityEngine::UIElements::TextEventHandler::HandleLinkTag)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6ca2fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "HandleLinkTag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEventHandler.HandleATag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEventHandler::*)()>(&::UnityEngine::UIElements::TextEventHandler::HandleATag)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6ca2eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "HandleATag", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_TextElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_TextElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextElement = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerDownEvent*>*& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_LinkTagOnPointerDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LinkTagOnPointerDown;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerDownEvent*>* const&
UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_LinkTagOnPointerDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LinkTagOnPointerDown;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_m_LinkTagOnPointerDown(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerDownEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LinkTagOnPointerDown = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_LinkTagOnPointerUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LinkTagOnPointerUp;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* const& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_LinkTagOnPointerUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LinkTagOnPointerUp;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_m_LinkTagOnPointerUp(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LinkTagOnPointerUp = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_LinkTagOnPointerMove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LinkTagOnPointerMove;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* const&
UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_LinkTagOnPointerMove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LinkTagOnPointerMove;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_m_LinkTagOnPointerMove(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LinkTagOnPointerMove = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>*& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_LinkTagOnPointerOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LinkTagOnPointerOut;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* const&
UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_LinkTagOnPointerOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LinkTagOnPointerOut;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_m_LinkTagOnPointerOut(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LinkTagOnPointerOut = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_ATagOnPointerUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ATagOnPointerUp;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* const& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_ATagOnPointerUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ATagOnPointerUp;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_m_ATagOnPointerUp(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ATagOnPointerUp = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_ATagOnPointerMove() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ATagOnPointerMove;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* const& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_ATagOnPointerMove() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ATagOnPointerMove;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_m_ATagOnPointerMove(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ATagOnPointerMove = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>*& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_ATagOnPointerOver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ATagOnPointerOver;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>* const& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_ATagOnPointerOver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ATagOnPointerOver;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_m_ATagOnPointerOver(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOverEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ATagOnPointerOver = value;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>*& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_ATagOnPointerOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ATagOnPointerOut;
}
constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* const& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_m_ATagOnPointerOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ATagOnPointerOut;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_m_ATagOnPointerOut(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerOutEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ATagOnPointerOut = value;
}
constexpr bool& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_isOverridingCursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOverridingCursor;
}
constexpr bool const& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_isOverridingCursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOverridingCursor;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_isOverridingCursor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isOverridingCursor = value;
}
constexpr int32_t& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_currentLinkIDHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentLinkIDHash;
}
constexpr int32_t const& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_currentLinkIDHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentLinkIDHash;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_currentLinkIDHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentLinkIDHash = value;
}
constexpr bool& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_hasLinkTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasLinkTag;
}
constexpr bool const& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_hasLinkTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasLinkTag;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_hasLinkTag(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasLinkTag = value;
}
constexpr bool& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_hasATag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasATag;
}
constexpr bool const& UnityEngine::UIElements::TextEventHandler::__cordl_internal_get_hasATag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasATag;
}
constexpr void UnityEngine::UIElements::TextEventHandler::__cordl_internal_set_hasATag(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasATag = value;
}
inline ::UnityEngine::TextCore::Text::TextInfo* UnityEngine::UIElements::TextEventHandler::get_textInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "get_textInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextCore::Text::TextInfo*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextEventHandler::_ctor(::UnityEngine::UIElements::TextElement* textElement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textElement);
}
inline bool UnityEngine::UIElements::TextEventHandler::HasAllocatedLinkCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "HasAllocatedLinkCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextEventHandler::AllocateLinkCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "AllocateLinkCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::TextEventHandler::HasAllocatedATagCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "HasAllocatedATagCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextEventHandler::AllocateATagCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "AllocateATagCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextEventHandler::ATagOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* pue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "ATagOnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pue);
}
inline void UnityEngine::UIElements::TextEventHandler::ATagOnPointerOver(::UnityEngine::UIElements::PointerOverEvent* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                         { "ATagOnPointerOver", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerOverEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void UnityEngine::UIElements::TextEventHandler::ATagOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* pme) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                         { "ATagOnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pme);
}
inline void UnityEngine::UIElements::TextEventHandler::ATagOnPointerOut(::UnityEngine::UIElements::PointerOutEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                         { "ATagOnPointerOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerOutEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TextEventHandler::LinkTagOnPointerDown(::UnityEngine::UIElements::PointerDownEvent* pde) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                         { "LinkTagOnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pde);
}
inline void UnityEngine::UIElements::TextEventHandler::LinkTagOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* pue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                         { "LinkTagOnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pue);
}
inline void UnityEngine::UIElements::TextEventHandler::LinkTagOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* pme) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                         { "LinkTagOnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pme);
}
inline void UnityEngine::UIElements::TextEventHandler::LinkTagOnPointerOut(::UnityEngine::UIElements::PointerOutEvent* poe) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(),
                                                                                         { "LinkTagOnPointerOut", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerOutEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poe);
}
inline void UnityEngine::UIElements::TextEventHandler::HandleLinkAndATagCallbacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "HandleLinkAndATagCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextEventHandler::HandleLinkTag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "HandleLinkTag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextEventHandler::HandleATag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEventHandler*>(), { "HandleATag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextEventHandler* UnityEngine::UIElements::TextEventHandler::New_ctor(::UnityEngine::UIElements::TextElement* textElement) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextEventHandler*>(textElement));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextEventHandler::TextEventHandler() {}

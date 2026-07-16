#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AtlasAllocator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AtlasAllocator_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AtlasAllocator_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::AtlasAllocator_AtlasNode.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AtlasAllocator_AtlasNode* (
    ::UnityEngine::Rendering::AtlasAllocator_AtlasNode::*)(::by_ref<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*>, int32_t, int32_t, bool)>(
    &::UnityEngine::Rendering::AtlasAllocator_AtlasNode::Allocate)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x67ab2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>(),
                                                             { "Allocate",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*>>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AtlasAllocator_AtlasNode.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AtlasAllocator_AtlasNode::*)(
    ::by_ref<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*>)>(&::UnityEngine::Rendering::AtlasAllocator_AtlasNode::Release)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x67ab4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>(),
                                                { "Release", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AtlasAllocator_AtlasNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AtlasAllocator_AtlasNode::*)()>(&::UnityEngine::Rendering::AtlasAllocator_AtlasNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67ab208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode*& UnityEngine::Rendering::AtlasAllocator_AtlasNode::__cordl_internal_get_m_RightChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightChild;
}
constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* const& UnityEngine::Rendering::AtlasAllocator_AtlasNode::__cordl_internal_get_m_RightChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightChild;
}
constexpr void UnityEngine::Rendering::AtlasAllocator_AtlasNode::__cordl_internal_set_m_RightChild(::UnityEngine::Rendering::AtlasAllocator_AtlasNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RightChild = value;
}
constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode*& UnityEngine::Rendering::AtlasAllocator_AtlasNode::__cordl_internal_get_m_BottomChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BottomChild;
}
constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* const& UnityEngine::Rendering::AtlasAllocator_AtlasNode::__cordl_internal_get_m_BottomChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BottomChild;
}
constexpr void UnityEngine::Rendering::AtlasAllocator_AtlasNode::__cordl_internal_set_m_BottomChild(::UnityEngine::Rendering::AtlasAllocator_AtlasNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BottomChild = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::AtlasAllocator_AtlasNode::__cordl_internal_get_m_Rect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rect;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::AtlasAllocator_AtlasNode::__cordl_internal_get_m_Rect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rect;
}
constexpr void UnityEngine::Rendering::AtlasAllocator_AtlasNode::__cordl_internal_set_m_Rect(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Rect = value;
}
inline ::UnityEngine::Rendering::AtlasAllocator_AtlasNode*
UnityEngine::Rendering::AtlasAllocator_AtlasNode::Allocate(::by_ref<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*> pool, int32_t width, int32_t height,
                                                           bool powerOfTwoPadding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>(),
                                                           { "Allocate",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*>>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>(this, ___internal_method, pool, width, height, powerOfTwoPadding);
}
inline void UnityEngine::Rendering::AtlasAllocator_AtlasNode::Release(::by_ref<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*> pool) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>(),
                                              { "Release", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pool);
}
inline void UnityEngine::Rendering::AtlasAllocator_AtlasNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* UnityEngine::Rendering::AtlasAllocator_AtlasNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode::AtlasAllocator_AtlasNode() {}
//  Writing Method size for method: ::UnityEngine::Rendering::AtlasAllocator___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AtlasAllocator___c::*)()>(&::UnityEngine::Rendering::AtlasAllocator___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67ab5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AtlasAllocator___c.__ctor_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AtlasAllocator___c::*)(::UnityEngine::Rendering::AtlasAllocator_AtlasNode*)>(
    &::UnityEngine::Rendering::AtlasAllocator___c::__ctor_b__6_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67ab5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator___c*>(),
                                                                                           { "<.ctor>b__6_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AtlasAllocator___c.__ctor_b__6_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AtlasAllocator___c::*)(::UnityEngine::Rendering::AtlasAllocator_AtlasNode*)>(
    &::UnityEngine::Rendering::AtlasAllocator___c::__ctor_b__6_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67ab600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator___c*>(),
                                                                                           { "<.ctor>b__6_1", {}, { ::i2c::type_of<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::AtlasAllocator___c::setStaticF___9(::UnityEngine::Rendering::AtlasAllocator___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::AtlasAllocator___c*, "<>9", ::UnityEngine::Rendering::AtlasAllocator___c*>(
      std::forward<::UnityEngine::Rendering::AtlasAllocator___c*>(value));
}
inline ::UnityEngine::Rendering::AtlasAllocator___c* UnityEngine::Rendering::AtlasAllocator___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::AtlasAllocator___c*, "<>9", ::UnityEngine::Rendering::AtlasAllocator___c*>();
}
inline void UnityEngine::Rendering::AtlasAllocator___c::setStaticF___9__6_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*, "<>9__6_0", ::UnityEngine::Rendering::AtlasAllocator___c*>(
      std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* UnityEngine::Rendering::AtlasAllocator___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*, "<>9__6_0", ::UnityEngine::Rendering::AtlasAllocator___c*>();
}
inline void UnityEngine::Rendering::AtlasAllocator___c::setStaticF___9__6_1(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*, "<>9__6_1", ::UnityEngine::Rendering::AtlasAllocator___c*>(
      std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* UnityEngine::Rendering::AtlasAllocator___c::getStaticF___9__6_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*, "<>9__6_1", ::UnityEngine::Rendering::AtlasAllocator___c*>();
}
inline void UnityEngine::Rendering::AtlasAllocator___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::AtlasAllocator___c::__ctor_b__6_0(::UnityEngine::Rendering::AtlasAllocator_AtlasNode* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator___c*>(),
                                                                                         { "<.ctor>b__6_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void UnityEngine::Rendering::AtlasAllocator___c::__ctor_b__6_1(::UnityEngine::Rendering::AtlasAllocator_AtlasNode* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator___c*>(),
                                                                                         { "<.ctor>b__6_1", {}, { ::i2c::type_of<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::UnityEngine::Rendering::AtlasAllocator___c* UnityEngine::Rendering::AtlasAllocator___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::AtlasAllocator___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AtlasAllocator___c::AtlasAllocator___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::AtlasAllocator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AtlasAllocator::*)(int32_t, int32_t, bool)>(&::UnityEngine::Rendering::AtlasAllocator::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x67ab00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AtlasAllocator.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::AtlasAllocator::*)(::by_ref<::UnityEngine::Vector4>, int32_t, int32_t)>(
    &::UnityEngine::Rendering::AtlasAllocator::Allocate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x67ab210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator*>(),
                                                             { "Allocate", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AtlasAllocator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::AtlasAllocator::*)()>(&::UnityEngine::Rendering::AtlasAllocator::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x67ab488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode*& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_Root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Root;
}
constexpr ::UnityEngine::Rendering::AtlasAllocator_AtlasNode* const& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_Root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Root;
}
constexpr void UnityEngine::Rendering::AtlasAllocator::__cordl_internal_set_m_Root(::UnityEngine::Rendering::AtlasAllocator_AtlasNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Root = value;
}
constexpr int32_t& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_Width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Width;
}
constexpr int32_t const& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_Width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Width;
}
constexpr void UnityEngine::Rendering::AtlasAllocator::__cordl_internal_set_m_Width(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Width = value;
}
constexpr int32_t& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_Height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Height;
}
constexpr int32_t const& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_Height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Height;
}
constexpr void UnityEngine::Rendering::AtlasAllocator::__cordl_internal_set_m_Height(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Height = value;
}
constexpr bool& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_powerOfTwoPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___powerOfTwoPadding;
}
constexpr bool const& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_powerOfTwoPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___powerOfTwoPadding;
}
constexpr void UnityEngine::Rendering::AtlasAllocator::__cordl_internal_set_powerOfTwoPadding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___powerOfTwoPadding = value;
}
constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>*& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_NodePool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodePool;
}
constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* const& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_NodePool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodePool;
}
constexpr void UnityEngine::Rendering::AtlasAllocator::__cordl_internal_set_m_NodePool(::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::AtlasAllocator_AtlasNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NodePool = value;
}
inline void UnityEngine::Rendering::AtlasAllocator::_ctor(int32_t width, int32_t height, bool potPadding) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, potPadding);
}
inline bool UnityEngine::Rendering::AtlasAllocator::Allocate(::by_ref<::UnityEngine::Vector4> result, int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator*>(),
                                                           { "Allocate", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result, width, height);
}
inline void UnityEngine::Rendering::AtlasAllocator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::AtlasAllocator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::AtlasAllocator* UnityEngine::Rendering::AtlasAllocator::New_ctor(int32_t width, int32_t height, bool potPadding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::AtlasAllocator*>(width, height, potPadding));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AtlasAllocator::AtlasAllocator() {}

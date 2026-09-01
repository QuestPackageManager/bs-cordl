#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\Hierarchy\SceneItem.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__ItemWithChildren_3_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__SceneItem_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__GameObjectItem_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem.CompareChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::CompareChildren)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a6a710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem.get_Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::get_Label)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a6a77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem.get_Valid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::get_Valid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a6a7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem.BuildHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle (::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::*)()>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::BuildHandle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a6a824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem.FetchExpectedChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::GameObject>> (::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::*)()>(
    &::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::FetchExpectedChildren)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a6a83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::*)()>(&::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a6a848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::CompareChildren(::UnityEngine::GameObject* lhs, ::UnityEngine::GameObject* rhs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lhs, rhs);
}
inline ::StringW Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::get_Label() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::get_Valid() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::BuildHandle() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::FetchExpectedChildren() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem* Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::SceneItem::SceneItem() {}
